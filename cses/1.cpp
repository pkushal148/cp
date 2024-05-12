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
#define rep(i,a,b) for(int i=a;i<b;i++)

int main()
{
	ll n;
	cin>>n;
	while(n!=1)
	{
		cout<<n<<" ";
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n)+1;
		}
	}
	cout<<n;
	return 0;
}
