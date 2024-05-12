#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int codes[10];
	for(int i=0;i<10;i++)
	{
		codes[i]=i;
	}
	codes[0]=10;
	while(t>0)
	{
		string s;
		cin>>s;
		int i=0;
		char cur='1';
		int ans=0;
		while(i<4)
		{
			ans+=(abs(codes[s[i]-'0']-codes[cur-'0']))+1;
			cur=s[i];
			i++;
		}
		cout<<ans<<endl;
		t--;
	}
	
	return 0;
}
