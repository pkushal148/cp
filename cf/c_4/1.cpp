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
		string s;
		cin>>s;
		cout<<s[n-1]<<endl;
		t--;
	}
	
	return 0;
}
