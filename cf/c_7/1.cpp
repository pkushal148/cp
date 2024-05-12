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
		int a,b,c;
		cin>>a>>b>>c;
		if(a==b)
		{
			cout<<c<<endl;
		}
		else if(b==c)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<b<<endl;
		}
		t--;
	}
	
	return 0;
}
