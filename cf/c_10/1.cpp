#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	if(n==2)
	{
		if(s=="00")
		{
			cout<<"YES"<<endl;
			return;
		}
		else
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	if(n==1)
	{
		if(s=="0")
		{
			cout<<"YES"<<endl;
			return;
		}
		else
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			count++;
			v.push_back(i);
		}
	}
	if(count==2 && v[1]-v[0]==1)
	{
		cout<<"NO"<<endl;
		return;
	}
	if(count%2==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
		
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		solve();
		t--;
	}
	
	return 0;
}
