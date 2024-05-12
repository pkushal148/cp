#include <iostream>
#include <vector>
#include <string>
using namespace std;
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}
int main()
{

		int a,b,c;
		cin>>a>>b>>c;
		int maxi=-1;
		maxi=max((a*b)*c,maxi);
		maxi=max((a+b)*c,maxi);
		maxi=max((a+b)+c,maxi);
		maxi=max(a*(b+c),maxi);
		cout<<maxi;
	return 0;
}
