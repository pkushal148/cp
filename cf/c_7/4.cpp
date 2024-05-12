#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string ans="";
		int i=n-1;
		while(i>=0)
		{
			if(s[i]=='b' || s[i]=='c' || s[i]=='d')
			{
				int j=3;
				while(j>0)
				{
					ans+=s[i];
					i--;
					j--;
				}
				ans+=".";
			}
			else
			{
				int j=2;
				while(j>0)
				{
					ans+=s[i];
					i--;
					j--;
				}
				ans+=".";
			}
		}
		n=ans.size();
		for(int i=n-2;i>=0;i--)
		{
			cout<<ans[i];
		}
		cout<<endl;	
		t--;
	}
	
	return 0;
}
