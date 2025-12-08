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
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll mod=1e9+7;
int main()
{
	ll n;
	cin>>n;
	ll ans=1;
	rep(i,0,n)
	{
		ans=((ans*2)%mod);
	}
	cout<<ans;
		
	return 0;
}
