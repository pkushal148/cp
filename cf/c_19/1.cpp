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
    int x, y, xs;
    cin >> x >> y;
    int n = y / 2;
    if (y % 2 != 0)
    {
        n++;
    }
    int ans = n;
    xs = (15 * n) - (4 * y);
    if (xs < x)
    {
        x = x - xs;
        if (x % 15 == 0)
        {
            x = x / 15;
        }
        else
        {
            x = ((x / 15) + 1);
        }
        ans = ans + x;
    }
    cout << ans << endl;
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
