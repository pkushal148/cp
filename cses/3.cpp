#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll; 
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

int main()
{
	string s;
	cin>>s;
	ll l=s.size();
	ll maxi=1,cur=1;
	rep(i,1,l)
	{
		if(s[i]!=s[i-1])
		{
			cur=1;
		}
		else
		{
			cur++;
		}
		maxi=max(maxi,cur);
	}
	cout<<maxi;
	
	return 0;
}
