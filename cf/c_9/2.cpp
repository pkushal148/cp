#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<vector<char>> a(2*n,vector<char>(2*n,'*'));
	char cur='#';
	int i=0;
	
	while(i<2*n)
	{
		int j=0;
		char temp=cur;
		while(j<2*n)
		{
			a[i][j]=temp;
			a[i+1][j]=temp;
			a[i][j+1]=temp;
			a[i+1][j+1]=temp;	
			j=j+2;
			if(temp=='#')
			{
				temp='.';
			}
			else
			{
				temp='#';
			}
		}
		i=i+2;
		if(cur=='#')
		{
			cur='.';
		}
		else
		{
			cur='#';
		}
	}
	
	
	for(int i=0;i<2*n;i++)
	{
		for(int j=0;j<2*n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
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
