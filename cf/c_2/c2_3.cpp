#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t>0)
	{
		int ans=0;
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				char x;
				cin>>x;
				if(x=='X')
				{
					if(i==0 || j==0 || i==9 || j==9)
					{
						ans=ans+1;
					}
					else if(i==1 || j==1 || i==8 || j==8)
					{
						ans=ans+2;
					}
					else if(i==2 || j==2 || i==7 || j==7)
					{
						ans=ans+3;
					}
					else if(i==3 || j==3 || i==6 || j==6)
					{
						ans=ans+4;
					}
					else
					{
						ans=ans+5;
					}
				}
			}
		}
		
		cout<<ans<<endl;
		t--;
	}
	return 0;
}

/*
X.........
..........
.......X..
.....X....
......X...
..........
.........X
..X.......
..........
.........X
*/
