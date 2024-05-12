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
		int q=4;
		while(1)
		{
			if(n%(q-1)==0)
			{
				cout<<n/(q-1)<<endl;
				break;
			}
			q=q*2;
		}
		t--;
	}
	
	return 0;
}
