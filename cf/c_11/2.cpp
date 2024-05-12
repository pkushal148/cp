#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
	long long int n,c,d;
	cin>>n>>c>>d;
	map<long long int,long long int> mp;
	long long int val;
	long long int mini=1e9;
	for(int i=0;i<n*n;i++)
	{
		cin>>val;
		mp[val]++;
		mini=min(mini,val);
	}
	for(long long int i=0;i<n;i++)
	{
		long long int temp=mini;
		if(mp[temp]<=0)
		{
			cout<<"NO"<<endl;
			return;
		}	
		mp[temp]--;
		for(long long int j=1;j<n;j++)
		{
			temp=temp+c;
			if(mp[temp]<=0)
			{
				cout<<"NO"<<endl;
				return;
			}
			mp[temp]--;
		}
		mini=mini+d;
	}
	cout<<"YES"<<endl;
	return;
		
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
