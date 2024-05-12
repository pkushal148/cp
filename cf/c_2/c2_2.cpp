#include <iostream>
#include <vector>
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
		int mini=1e9;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(mini>a[i])
			{
				mini=a[i];
			}
		}
		int ans=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==mini)
			{
				a[i]++;
				mini=1e9;
			}
			ans=ans*a[i];
		}
		cout<<ans<<endl;
		t--;
	
	}
	
	return 0;
}
