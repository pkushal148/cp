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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int i=0;
		int ans=0;
		while(i<n)
		{
			if(s[i]=='B')
			{
				i=i+k;
				ans++;
			}
			else
			{
				i++;
			}
		}
		cout<<ans<<endl;
		t--;
	}
	
	
	return 0;
}
