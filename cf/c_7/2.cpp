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
		char x;
		vector<int> vis(3,0);
		for(int i=0;i<3;i++)
		{
			
			for(int j=0;j<3;j++)
			{
				cin>>x;
				if(x=='A')
				{
					vis[0]++;
				}
				else if(x=='B')
				{
					vis[1]++;
				}
				else if(x=='C')
				{
					vis[2]++;
				}
			}
		}
		for(int i=0;i<3;i++)
		{
			if(vis[i]==2)
			{
				x='A'+i;
				cout<<x<<endl;
				break;
			}
		}
		t--;
	}
	
	return 0;
}
