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
    ll n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    cout << 1;

    return 0;
}
