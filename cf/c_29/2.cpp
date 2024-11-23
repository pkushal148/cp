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
    int l, r, L, R;
    cin >> l >> r >> L >> R;

    if (l > R || L > r)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        int lmax = max(l, L), rmin = min(R, r);
        int ans = rmin - lmax;
        if (l < lmax || L < lmax)
        {
            ans++;
        }
        if (r > rmin || R > rmin)
        {
            ans++;
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
