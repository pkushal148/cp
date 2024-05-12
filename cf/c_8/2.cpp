#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
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
		string ans="";
		char x='z';
		unordered_map<char,int> mp;
		for(int i=0;i<n;i++)
		{
			char y=x;
			while(mp[y]!=a[i])
			{
				y++;
			}
			mp[y]++;
			ans=ans+y;
			if(y==x)
			{
				x--;
			}
		}
		cout<<ans<<endl;
		t--;
	}
	
	return 0;
}
