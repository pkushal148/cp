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

    int l = x - 1, r = x + 1;
    if (k % 2 != 0)
    {
        cout << x << " " << y << endl;
        k--;
    }
    while (k > 0)
    {
        cout << l << " " << y << endl;
        cout << r << " " << y << endl;
        l--;
        r++;
        k = k - 2;
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
