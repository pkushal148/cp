#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool check(int n)
{
	int w=n;
	while(w>0)
	{
		int x=w%10;
		if(x>1)
		{
			return false;
		}
		w=w/10;
	}
	return true;
}
bool solve2(int n,vector<int> &dp)
{
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0 && check(i)==1)
		{
			if(check(n/i)==1)
			{
				dp[n]=1;
				return true;
			}
			if(solve2(n/i,dp))
			{
				dp[n]=1;
				return true;
			}
		}
	}
	dp[n]=0;
	return false; 
}
void solve(vector<int> &dp)
{
	int n;
	cin>>n;
	//cout<<n<<endl;
	if(check(n))
	{
		cout<<"YES"<<endl;
		return;
	}
	
	if(solve2(n,dp))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}		
}
	
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		vector<int> dp(1e5+1,-1);
		dp[0]=1;
		dp[1]=1;
		solve(dp);
		t--;
	}
	
	return 0;
}
