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
		int n;
		cin>>n;
		vector<int> a(n);
		int neg=0,z=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			{
				neg++;
			}
			if(a[i]==0)
			{
				z=1;
			}
		}
		if(z==1 || neg%2!=0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl<<1<<" "<<0<<endl;
		}
		
		t--;
	}
	
	return 0;
}
