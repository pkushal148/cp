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
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    int ans = a;
    int m = c - b;
    if (a >= m)
    {
        int x = (a + m) / 2;
        int y = a - x;
        c = c - x;
        b = b - y;
        ans = ans + b;
    }
    else
    {
        c = c - m;
        ans = ans + min(c, b);
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
