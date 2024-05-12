#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{
	int n,a,b;
	int cost;
	cin>>n>>a>>b;
	if(2*a>b)
	{
		cost=b;
	}
	else
	{
		cost=2*a;
	}
	if(n%2==0)
	{
		cout<<cost*(n/2)<<endl;
	}
	else
	{
		cout<<(cost*(n/2))+a<<endl;
	}
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
