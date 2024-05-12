#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{
	long long int n,idx;
	cin>>n>>idx;
	idx--;
	vector<long long int> a(n);
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int loc=0;
	for(long long int i=0;i<n;i++)
	{
		if(a[i]>a[idx] && i<idx)
		{
			loc=i;
			break;
		}
		
	}
	
	if(loc!=0)
	{
		if(loc>idx-loc)
		{
			loc=0;
		}
	}
	long long int temp=a[loc];
	a[loc]=a[idx];
	a[idx]=temp;

	long long int i=loc;
	long long int ans=0;
	if(loc!=0)
	{
		ans++;
	}
	while(i+1<n)
	{
		if(a[i]>a[i+1])
		{
			ans++;
		}
		else
		{
			break;
		}
		i++;
	}
	cout<<ans<<endl;
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		solve();
		t--;
	}
	
	return 0;
}
