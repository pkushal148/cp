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
	int n;
	cin>>n;
	vector<int> x(n-1),a(n);
	for(int i=0;i<n-1;i++)
	{
		cin>>x[i];
	}
	a[0]=x[0]+1;
	if(a[0]>=1e9)
	{
		a[0]=2;
	}
	for(int i=1;i<n;i++)
	{
		a[i]=x[i-1]+(a[i-1]);
		if(i!=n-1 && a[i]<x[i])
		{
			int k=((x[i]/a[i-1])+1);
			a[i]=(x[i-1]+(k*a[i-1]));
			if(a[i]>=1e9)
			{
				a[i]=x[i-1];
			}
		}		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
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
