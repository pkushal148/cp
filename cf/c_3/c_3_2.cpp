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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		unordered_map<char,int> mp;
		for(int i=0;i<n;i++)
		{
			mp[s[i]]++;
		}
		int o=0,e=0;
		for(auto it : mp)
		{
			if(it.second%2==0)
			{
				e++;
			}
			else
			{
				o++;
			}
		}
		int len=n-k;
		if(len%2==0)
		{
			while(k>0 && o>0)
			{
				k--;
				o--;
			}
			if(k%2!=0 || o>=0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;	
			}
		}
		else
		{
			
			while(k>0 && o>1)
			{
				k--;
				o--;
			}
			if(k%2!=0 && o==0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;	
			}
		}
		
		t--;
	}
	
	return 0;
}
