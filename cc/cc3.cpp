#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> v(5,vector<int>(5,0));
	int r,c;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>v[i][j];
			if(v[i][j]==1)
			{
				r=i;
				c=j;
			}
		}
	}
	r=abs(r-2);
	c=abs(c-2);
	cout<<r+c;
	
	return 0;
}
