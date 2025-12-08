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
	
	ll ans=0;
	while(n>0)
	{
		n=n/5;
		ans=ans+n;
		
	}
	cout<<ans;
	
	return 0;
}
