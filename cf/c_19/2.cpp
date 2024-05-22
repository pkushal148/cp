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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    map<char, char> kmap;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    string key = "";
    for (auto it : mp)
    {
        key = key + (it.first);
    }
    int l = key.size();
    for (int i = 0; i < l; i++)
    {
        kmap[key[i]] = key[l - i - 1];
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans = ans + kmap[s[i]];
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
