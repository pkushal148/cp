#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	if(m%2==0 || n%2==0)
	{
		if(n%2!=0)
		{
			swap(m,n);
		}
		cout<<m*(n/2);
	}
	else
	{
		cout<<(m*(n/2))+(m/2);
	}	
	return 0;
}
