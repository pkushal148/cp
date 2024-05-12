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
	int n,m;
	cin>>n>>m;
	string a,b;
	cin>>a>>b;
	ll ans=0;
	int i=0,j=0;
	
	while(i<n && j<m)
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
			ans++;
		}
		else
		{
			j++;
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
