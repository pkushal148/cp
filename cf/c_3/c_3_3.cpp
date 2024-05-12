#include <iostream>
#include <vector>
#include <string>
using namespace std;
int solve(vector<int> a,int k)
{
	int n=a.size();
	if(k==2 || k==4)
	{
		int e=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				e++;
			}
		}
		if(k==2)
		{
			if(e>0)
			{
				return 0;
			}
			return 1;
		}
		else
		{
			int mini=1000;
			if(e==0)
			{
				mini=2;
			}
			else if(e==1)
			{
				mini=1;
			}
			else
			{	
				mini=0;
			}
			for(int i=0;i<n;i++)
			{
				if(a[i]<=4)
				{
					if(mini>abs(a[i]-4))
					{
						mini=abs(a[i]-4);
					}
				}
				if(a[i]<=8)
				{
					if(mini>abs(a[i]-8))
					{
						mini=abs(a[i]-8);
					}
				}
				
			}
			return mini;
		}
	}
	else if(k==5)
	{
		int mini=100;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=5)
			{
				if(mini>abs(a[i]-5))
				{
					mini=abs(a[i]-5);
				}
			}
			if(mini>abs(a[i]-10))
			{
				mini=abs(a[i]-10);
			}
		}
		return mini;
	}
	else if(k==3)
	{
		int mini=100;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=3)
			{
				if(mini>abs(a[i]-3))
				{
					mini=abs(a[i]-3);
				}
			}
			if(a[i]<=6)
			{
				if(mini>abs(a[i]-6))
				{
					mini=abs(a[i]-6);
				}
			}
			if(a[i]<=9)
			{
				if(mini>abs(a[i]-9))
				{
					mini=abs(a[i]-9);
				}
			}
		}
		return mini;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<solve(a,k)<<endl;
		t--;
	}
	
	return 0;
}
