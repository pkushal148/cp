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
	ll t;
	cin>>t;
	
	while(t>0)
	{
		ll x,y;
		cin>>x>>y;
		x--;
		y--;
		ll maxi=max(x,y);
		ll crnr=(maxi*(maxi+1))+1;
		if(maxi%2==0)
		{
			crnr=crnr+(maxi-x)+(y-maxi);
		}
		else
		{
			crnr=crnr+(x-maxi)+(maxi-y);
		}
		cout<<crnr<<"\n";
		
		t--;
	}
	return 0;
}
