#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int q;
		cin>>q;
		vector<pair<int,int>> que;
		for(int i=0;i<q;i++)
		{
			int u,v;
			cin>>u>>v;
			que.push_back({u,v});
		}
		for(int i=0;i<q;i++)
		{
			
		
		t--;
	}
	
	return 0;
}
