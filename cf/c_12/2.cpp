#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int> a(n);
	map<int,int> mp;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[i]=x;
		mp[x]++;
	}
	if(mp.size()==1)
	{
		cout<<-1<<endl;
		return;
	}
	int count=0,ans=n;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[0])
		{
			count++;
		}
		else
		{
			ans=min(ans,count);
			count=0;
		}
	}
	ans=min(ans,count);
	cout<<ans<<endl;
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
