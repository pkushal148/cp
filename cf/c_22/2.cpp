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
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }
    ll ans = 1;
    ll mini = a[0], maxi = a[0];
    for (ll i = 0; i < n; i++)
    {
        if (mini > a[i])
        {
            mini = a[i];
        }
        if (maxi < a[i])
        {
            maxi = a[i];
        }
        if (mini > b[i])
        {
            mini = b[i];
        }
        if (maxi < b[i])
        {
            maxi = b[i];
        }
        if (a[i] > b[i])
        {
            ans = ans + a[i] - b[i];
        }
        else
        {
            ans = ans + b[i] - a[i];
        }
    }

    if (b[n] >= mini && b[n] <= maxi)
    {
        cout << ans << endl;
    }
    else
    {
        if (b[n] > maxi)
        {
            ans = ans + b[n] - maxi;
        }
        else
        {
            ans = ans + mini - b[n];
        }
        cout << ans << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }

    return 0;
}
