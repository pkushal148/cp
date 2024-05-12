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
	int n,k;
	cin>>n>>k;
	map<int,int> mp;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		mp[val]++;
	}
	for(auto it : mp)
	{
		a.push_back(it.second);
	}
	sort(a.begin(),a.end());
	int l=a.size();
	int prev=0,x=l;
	for(int i=l-1;i>=0;i--)
	{
		a[i]=prev+a[i];
		if(a[i]>=k)
		{
			prev=k-1;
		}
		else
		{
			x=i;
			break;
		}
	}
	if(x==l)
	{
		cout<<k-1<<endl;
	}
	else
	{
		int count=0;
		for(int i=x;i>=0;i--)
		{
			count=count+a[i];
		}
		cout<<count<<endl;
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
