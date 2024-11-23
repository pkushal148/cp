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
    int n, m;
    cin >> n >> m;
    int rs = 1e9, re = 0, cs = 1e9, ce = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char temp;
            cin >> temp;
            if (temp == '#')
            {
                rs = min(rs, i);
                re = max(re, i);
                cs = min(cs, j);
                ce = max(ce, j);
            }
        }
    }
    cout << (rs + re) / 2 << " " << (cs + ce) / 2 << endl;
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
