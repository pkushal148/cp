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
    int m, n, count = 0;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> a(7, 0);
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
    }
    for (int i = 0; i < 7; i++)
    {
        if (a[i] <= m)
        {
            count += m - a[i];
        }
    }
    cout << count << endl;
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
