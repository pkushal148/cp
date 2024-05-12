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
	ll n,k;
	cin>>n>>k;
	vi a(n);
	rep(i,0,n)
	{
		cin>>a[i];
	}
	vi temp=a;
	sort(temp.begin(),temp.end());
	rep(i,0,k)
	{
		ll val=temp[i];
		for(ll j=0;j<n;j++)
		{
			if(val==a[j])
			{
				ll l=1e9,r=1e9;
				if(j-1>=0)
				{
					l=a[j-1];
				}
				if(j+1<n)
				{
					r=a[j+1];
				}
				if(l>r)
				{
					a[j]=l;
				}
				else if(l<r)
				{
					a[j]=r;
				}
			}
		}		
	}
	ll sum=0;
	rep(i,0,n)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
	
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
