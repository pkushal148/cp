#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
void dp(int i, vector<int> a, int n, map<int, int> &mp, vector<int> &ans, set<vector<int>> s)
{
    if (i == n)
    {
        s.insert(ans);
        return;
    }

    dp(i + 1, a, n, mp, ans, s);
    if (mp[a[i]] <= 0)
    {
        mp[a[i]]++;
        ans.push_back(a[i]);
        dp(i + 1, a, n, mp, ans, s);
        // mp[a[i]]--;
        // ans.pop_back();
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    vector<int> ans;
    set<vector<int>> s;
    dp(0, a, n, mp, ans, s);

    for (auto it : s)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
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
