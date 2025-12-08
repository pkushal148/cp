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
void solve()
{
    ll m, n;
    cin >> m >> n;
    ll x = (2 * m) - n;
    ll y = (2 * n) - m;
    if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}
