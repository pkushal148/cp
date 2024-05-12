#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
void solve(string str,set<string> &s)
{
	if(str.size()==0 || s.find(str)!=s.end())
	{
		return;
	}
	s.insert(str);
	solve(str.substr(1),s);
	if(str.size()>1)
	{
		if(str[0]==str[1])
		{
			return;
		}
		solve(str[0]+str.substr(2),s);
	}
}
	
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		set<string> s;
		solve(str,s);
		cout<<s.size()<<endl;
		t--;
	}
	
	return 0;
}
