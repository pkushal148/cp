#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		long long int tot=0;
		for(int i=0;i<n;i++)
		{	
			cin>>a[i];
			tot+=a[i];
		}
		
		if (ceil((double)sqrt(tot)) == floor((double)sqrt(tot))) 
		{
		
        		cout << "YES"<<endl;
    		}
    		else 
    		{
        		cout << "NO"<<endl;
    		}
		t--;
	}
	
	return 0;
}
