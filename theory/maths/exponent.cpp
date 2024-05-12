#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	long long int x,y,m,res=1;
	cin>>x>>y>>m;
	
	if(x==0) return 0;
	
	x=x%m;
	
	while(y>0)
	{
		if(y%2==1)
		{
			res=(res*x)%m;
		}
		y=y>>1;
		x=(((x%m)*(x%m))%m);
	}
	cout<<res<<endl;
	return 0;
}
