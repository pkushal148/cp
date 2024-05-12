#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int y=v[x-1];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>0 && v[i]>=y)
		{
			ans++; 
		}
		else
		{
			break;
		}
	}
	cout<<ans;
	return 0;
}
