#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve()
{	
	string s;
	cin>>s;
	int hr=0,min=0;
	for(int i=0;i<5;i++)
	{
		if(i<2)
		{
			hr=hr*10+(s[i]-'0');
		}
		else if(i>2)
		{
			min=min*10+(s[i]-'0');
		}
	}
	string ans="";
	string p=" PM";
	if(hr<12)
	{
		p=" AM";
	}
	if(hr>12)
	{
		hr=hr-12;
	}
	if(hr<10)
	{
		if(hr==0)
		{
			ans=ans+"12";
		}
		else
		{
			ans=ans+'0';
		}
		
	}
	
	if(hr>0)
	{
		ans=ans+to_string(hr);
	}
	ans=ans+':';
	if(min<10)
	{
		ans=ans+'0';
	}
	ans=ans+to_string(min);
	ans=ans+p;
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
