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
	ll n=s.size();
	ll st=-1;
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='1' && st==-1)
		{
			st=i;
		}
		else if(s[i]=='0' && st!=-1)
		{
			ans+=(i-st+1);
			st++;
		}
		else 
		{	
			continue;
		}
	}
	cout<<ans<<endl;
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
