#include <iostream>
#include <vector>
#include <string>
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
		unordered_map<int,int> mp;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		int s=0,p=0;
		for(auto it : mp)
		{
			if(it.second>1)
			{
				p++;
			}
			else
			{
				s++;
			}
			if(it.second==n)
			{
				s=n;
				break;
			}
		}
		if(s==n || p<2 )
		{
			cout<<-1<<endl;
		}
		else
		{
			vector<int> b(n);
			
		}
		t--;
	}
	
	return 0;
}
