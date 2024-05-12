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
	int n,count=0;
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		mp[val]++;
	}
	
	for(auto it: mp)
	{
		count=count+(it.second/3);
	}
	
	cout<<count<<endl;
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
