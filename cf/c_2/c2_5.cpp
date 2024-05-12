#include <iostream>
#include <vector>
#include <string>
using namespace std;
long long int trap(vector<long long int>& height) 
{
        long long int n=height.size();
        vector<long long int> left(n,0),right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(long long int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        for(long long int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        long long int ans=0;
        for(long long int i=0;i<n;i++)
        {
            long long int t=min(left[i],right[i])-height[i];
            if(t>0)
            {
                ans=ans+t;
            }
        }
        return ans;
}
int main()
{
	long long int t;
	cin>>t;
	while(t>0)
	{
		long long int n,x;
		cin>>n>>x;
		vector<long long int> tank(n+2);
		long long int mini=1e9;
		for(long long int i=0;i<n;i++)
		{
			cin>>tank[i+1];
			mini=min(mini,tank[i]);
		}
		long long int h=min(tank[1],tank[n]);
		while(1)
		{
			tank[0]=h;
			tank[n+1]=h;
			if(h>x)
			{
				cout<<h<<endl;
				break;
			}
			long long int water=trap(tank);
			
			if(water>x)
			{
				if(h-1<=min(tank[1],tank[n]))
				{
					cout<<h<<endl;
				}
				else
				{
					cout<<h-1<<endl;
				}
				break;	
			}
			h++;
		}
		t--;
	}
	
	
	return 0;
}
