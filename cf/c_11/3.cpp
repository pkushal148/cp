#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
	int n,a;
	cin>>n>>a;
	vector<int> ships(n);
	for(int i=0;i<n;i++)
	{
		cin>>ships[i];
	}
	int s=0,e=n-1;
	int cnt=0;
	while(a>0)
	{
		int mini=min(ships[s],ships[e]);
		if(a<2*mini)
		{
			break;
		}
		ships[s]=ships[s]-mini;
		a=a-mini;
		if(ships[s]==0)
		{
			cnt++;
			s++;
		}
		if(a<=0)
		{
			break;
		}
		ships[e]=ships[e]-mini;
		a=a-mini;
		if(ships[e]==0)
		{
			cnt++;
			e--;
		}
		//cout<<s<<" "<<e<<" "<<a<<" "<<cnt<<endl;
	}
	cout<<cnt<<endl;
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

