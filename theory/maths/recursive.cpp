#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define mod 1e9
int solve(int n,vector<int> c,vector<int> &dp)
{
	int k=c.size();
	if(n<=k)
	{
		return dp[n-1];
	}
	
	
	int res=0;
	for(int i=0;i<k;i++)
	{
		if(dp[n-i-k-1]!=-1)
		{
			dp[n-i-k-1]=solve(n-i-k-1,c,dp);
		}
		res+=dp[n-i-k-1]*c[k-i-1];
	}
	
	return dp[n-1]=res;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int k,n;
		cin>>k;
		vector<int> b(k),c(k);
		for(int i=0;i<k;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<k;i++)
		{
			cin>>c[i];
		}
		cin>>n;
		vector<int> dp(n+1,-1);
		for(int i=0;i<k;i++)
		{
			dp[i]=b[i];
		}
		cout<<solve(n,c,dp)<<endl;
		t--;
	}
	
	return 0;
}
