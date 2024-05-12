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
	string prev="";
	int oz=0,pre=0;
	char last=prev[0];
	int ans=0,n=s.size();
	for(int i=1;i<n;i++)
	{
		if(last=='0' && s[i]=='1')
		{
			oz=1;
			pre++;
		}
		if(last=='1' && s[i]=='0')
		{	
			if(oz==1 && pre>=1)
			{
				ans=ans+2;
			}
			else
			{
				ans++;
			}
			oz=0;
		}
		last=s[i];
	}
	if(oz==1 && pre>=1)
	{
		ans=ans+2;
	}
	else
	{
		ans++;
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
