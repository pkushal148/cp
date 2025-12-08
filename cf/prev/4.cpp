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
	vector<ll> a(n);
	rep(i,0,n)
	{
		cin>>a[i];
	}
	ll cnt=0;
	rep(i,1,n)
	{
		if(a[i]<a[i-1])
		{
			cnt=cnt+a[i-1]-a[i];
			a[i]=a[i-1];
		}
	}
	cout<<cnt;
	
	return 0;
}
