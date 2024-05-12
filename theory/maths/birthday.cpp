#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	cout<<"give the probabilty to get no of people rquired"<<endl;
	double p;
	cin>>p;
	cout<<ceil(sqrt(2*365*log(1/(1-p))))<<endl;
	
	return 0;
}
