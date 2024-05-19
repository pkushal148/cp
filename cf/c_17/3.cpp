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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b)
	{
		int temp=b;
		b=a;
		a=temp;
	}
	if(c>d)
	{
		int temp=c;
		c=d;
		d=temp;
	}
	if(c<a)
	{
		int temp1=a;
		a=c;
		c=temp1;
		temp1=b;
		b=d;
		d=temp1;
	}	
	if(a<c && c<b && b<d)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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
