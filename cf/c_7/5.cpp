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
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		
		for(int i=0;i<n;i++)
		{
			long long int odd=0,even=0;
			for(int j=i;j<n;j++)
			{
				if(j%2==0)
				{
					even+=a[j];
				}
				else
				{
					odd+=a[j];
				}
				if(odd==even)
				{
					ans=1;
					break;
				}
			}
			if(ans==1)
			{
				break;
			}
		}
		
		
		if(ans==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
	
	return 0;
}
