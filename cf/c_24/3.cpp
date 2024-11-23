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
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> mp;
    map<int, int> pre;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            mp[b[i]]--;
            if (mp[b[i]] == 0)
            {
                mp.erase(b[i]);
            }
            pre[b[i]]++;
        }
    }
    int ans = 1;
    for (int i = 0; i < m; i++)
    {
        if (mp[d[i]] > 0)
        {
            mp[d[i]]--;
            if (mp[d[i]] == 0)
            {
                mp.erase(d[i]);
            }
            pre[d[i]]++;
        }
        else if (mp[d[i]] == 0)
        {
            mp.erase(d[i]);
            if (pre[d[i]] > 0)
            {
                continue;
            }
            else if (mp.size() == 0)
            {
                ans = 0;
                break;
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second == 0)
        {
            mp.erase(it.first);
        }
    }
    if (mp.size() > 0)
    {
        ans = 0;
    }
    if (ans)
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
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }

    return 0;
}
