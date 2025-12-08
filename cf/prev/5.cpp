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

int main()
{
	ll n;
	cin>>n;
	if(n<=3 && n!=1)
	{
		cout<<"NO SOLUTION";
	}
	else
	{
		ll x=2;
		while(x<=n)
		{
			cout<<x<<" ";
			x=x+2;
		}
		x=1;
		while(x<=n)
		{
			cout<<x<<" ";
			x=x+2;
		}
	}
			
	return 0;
}
