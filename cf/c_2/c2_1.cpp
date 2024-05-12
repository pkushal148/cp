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
		string s;
		cin>>s;
		if(s=="abc" || s=="acb" || s=="bac" || s=="cba")
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	
	}
	
	return 0;
}
