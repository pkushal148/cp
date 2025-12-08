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
#define rep(i, a, b) for (ll i = a; i < b; i++)
const ll mod = 1e9 + 7;
int main()
{
    ll n, sum = 0, temp;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    for (ll i = 1; i < n; i++)
    {
        cin >> temp;
        sum -= temp;
    }
    cout << sum;
    return 0;
}
