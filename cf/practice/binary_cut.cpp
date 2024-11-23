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
    string s;
    cin >> s;
    int n = s.size(), ans = 1, x = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0')
        {
            ans++;
        }
        else if (s[i] == '0' && s[i + 1] == '1')
        {
            x++;
        }
    }
    if (x > 1)
    {
        ans = ans + x - 1;
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
