#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t>0)
	{
		long long int n,m,k;
		cin>>n>>m>>k;
		vector<long long int> a(n),b(m);
		unordered_map<long long int,long long int> mp,mp1,mp2;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=k)
			{
				mp1[a[i]]++;
				mp[a[i]]++;
			}
		}
		for(long long int i=0;i<m;i++)
		{
			cin>>b[i];
			if(b[i]<=k)
			{
				mp2[b[i]]++;
				mp[b[i]]++;
			}
		}
		bool flag=true;
		long long int x=(k/2),y=k/2;
		for(auto it : mp)
		{
			if((mp1[it.first]>0 && mp2[it.first]==0) || (mp2[it.first]>0 && mp1[it.first]==0))
			{
				if(x>0 && mp1[it.first]>0)
				{
					x--;
				}
				else if(y>0 && mp2[it.first]>0)
				{
					y--;
				}
				else
				{
					flag=false;
					break;
				}
				mp[it.first]=-1;
			}
		}
		for(long long int i=1;i<=k;i++)
		{
			if(mp[i]==-1)
			{
				continue;
			}
			else if(x>0 && mp1[i]>0)
			{
				x--;
			}
			else if(y>0 && mp2[i]>0)
			{
				y--;
			}
			else
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
	
	return 0;
}
