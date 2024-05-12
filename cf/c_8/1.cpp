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
		string s;
		cin>>s;
		int mini=n,maxi=-1;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B')
			{
				mini=min(mini,i);
				maxi=max(maxi,i);
			}
		}
		if(maxi==-1)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<maxi-mini+1<<endl;
		}
		t--;
	}
	
	return 0;
}
