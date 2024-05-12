#include <iostream>
#include <vector>
using namespace std;

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
		vector<int> maxrow(k+1,-1e9);
		vector<int> maxcol(k+1,-1e9);
		vector<int> minrow(k+1,1e9);
		vector<int> mincol(k+1,1e9);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{	
				int x;
				if(a[i]>a[j])
				{
					x=a[j];	
				}
				else
				{
					x=a[i];
				}
				if(maxrow[x]<i)
				{
					maxrow[x]=i;
				}
				if(maxcol[x]<j)
				{
					maxcol[x]=j;
				}
				if(minrow[x]>i)
				{
					minrow[x]=i;
				}
				if(mincol[x]>j)
				{
					mincol[x]=j;
				}
			}
		}
		for(int i=1;i<=k;i++)
		{
			int x=maxrow[i]-minrow[i]+maxcol[i]-mincol[i]+2;
			if(x>2*n)
			{
				x=0;
			}
			cout<<x<<" ";
		}
		cout<<endl;
		t--;
	}
	
	return 0;
}
