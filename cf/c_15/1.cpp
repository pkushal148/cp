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
	int n,val;
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		mp[i+1]=val;
	}
	
	for(auto it : mp)
	{
		int b1=it.first;
		int b2=it.second;
		if(mp[b2]==b1)
		{
			cout<<2<<endl;
			return;
		}
	}
	cout<<3<<endl;
	return;
		
	
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
