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

void solve()
{
	ll n,k,b,s;
	cin>>n>>k>>b>>s;
	vector<ll> p(n),a(n);
	ll bob=0,sas=0;
	b--;
	s--;
	for(ll i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(k>0)
	{
		ll curb=a[b],curs=a[s];
		bob=bob+curb;
		sas=sas+curs;
		ll ns=p[s]-1;
		ll nb=p[b]-1;
		if(nb==b && ns==s)
		{
			break;
		}
		if(curb>curs || a[ns]>curs)
		{
			s=p[s]-1;
		}
		if(curs>curb || a[nb]>curb)
		{
			b=p[b]-1;
		}
		if(curs==curb)
		{
			ll ns=p[s]-1;
			ll nb=p[b]-1;
			if(a[ns]>a[s])
			{
				s=ns;
			}
			if(a[nb]>a[b])
			{
				b=nb;
			}
		}
		k--;
	}
	if(bob>sas)
	{
		cout<<"Bodya"<<endl;
	}
	else if(sas>bob)
	{
		cout<<"Sasha"<<endl;
	}
	else 
	{
		cout<<"Draw"<<endl;
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
