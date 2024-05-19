#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll; 
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve()
{
	string s;
	cin>>s;
	map<char,int> mp;
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		mp[s[i]]++;
	}
	if(mp.size()==1)
	{
		cout<<"NO"<<endl;
	}
	else 
	{
		cout<<"YES"<<endl;
		int i=0;
		while(s[i]==s[n-1])
		{
			i++;
		}
		char temp=s[i];
		s[i]=s[n-1];
		s[n-1]=temp;
		cout<<s<<endl;
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
