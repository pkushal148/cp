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
	ll n,sum=0;
	cin>>n;
	rep(i,1,n)
	{
		int x;
		cin>>x;
		sum=sum+x;
	}
	
	sum=((n*(n+1))/2)-sum;
	cout<<sum;
	
	return 0;
}
