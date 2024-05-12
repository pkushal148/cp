#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	
	if(m==1 || n==k)
	{
		cout<<"NO"<<endl;
		return;
	}
	int minc=1;
	if(n>m)
	{
		if(n%m!=0)
		{
			minc=((n/m)+1);
		}
		else
		{
			minc=n/m;
		}
	}
	n=n-minc;
	if(n<=k)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
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
