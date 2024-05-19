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
	int a,b,mini,maxi;
	cin>>a>>b;
	if(a>b)
	{
		mini=b;
		maxi=a;
	}
	else
	{
		mini=a;
		maxi=b;
	}
	cout<<mini<<" "<<maxi<<endl;
	
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
