#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k,x;
		cin>>n>>k>>x;
		if(n<k || k-x>1)
		{
			cout<<-1<<endl;
		}
		else
		{
			int sum=0;
			for(int i=1;i<k;i++)
			{
				sum=sum+i;
			}
			int y;
			if(k==x)
			{
				y=x-1;
			}
			else
			{
				y=x;
			}
			y=y*(n-k);
			sum=sum+y;
			cout<<sum<<endl;
		}	
		t--;
	}
	
	return 0;
}
