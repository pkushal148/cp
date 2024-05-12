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
		int x,y,z;
		cin>>x>>y>>z;
		if(x<y && y<z)
		{
			cout<<"STAIR"<<endl;
		}
		else if(x<y && y>z)
		{
			cout<<"PEAK"<<endl;
		}
		else
		{
			cout<<"NONE"<<endl;
		}
		t--;
	}
	
	return 0;
}
