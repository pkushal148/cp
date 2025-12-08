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
#define rep(i, a, b) for (ll i = a; i < b; i++)
const ll mod = 1e9 + 7;
int main()
{
    string s;
    cin >> s;
    ll n = s.size(), i = 1, ans = 0, cur = 1;

    while (i < n)
    {
        if (s[i] == s[i - 1])
        {
            cur++;
        }
        else
        {
            ans = max(ans, cur);
            cur = 1;
        }
        i++;
    }
    ans = max(ans, cur);
    cout << ans;
    return 0;
}
