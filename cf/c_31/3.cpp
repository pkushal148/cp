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
    int x, y, k;
    cin >> x >> y >> k;

    int maxi = max(x, y);

    int ans = maxi / k;
    if (maxi % k != 0)
    {
        ans++;
        ans = 2 * ans;
    }
    else
    {
        ans = (2 * ans);
        if (maxi == y)
        {
            ans--;
        }
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
