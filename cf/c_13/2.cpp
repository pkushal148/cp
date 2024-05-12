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
	vector<int> ans(n,0);
	int last=1,pos=0,i=0;
	while(k>0)
	{
		if(k&1)
		{
			ll val=1<<pos;
			/*if(val==1)
			{
				ans[0]=1;
				i=1;
				last=1<<last;
				
			}*/
			
			while(val>=last)
			{
				ans[i]=ans[i]+last;
				
				val=val-last;
				i=((i+1)%n);
				last=1<<last;
			}
			if(val>0)
			{
				ans[i]=ans[i]+val;
				i=((i+1)%n);
				val=0;
			}
		}
		k >>= 1;
        	pos++;
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;		
		
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
