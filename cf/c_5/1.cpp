#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int res=((((w*(w+1))/2))*k)-n;
	if(res<0)
	{
		cout<<0;	
	}
	else
	{
		cout<<res;
	}
	return 0;
}
