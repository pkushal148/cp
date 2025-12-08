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
    map<char, int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    ll o = 0;
    char mid = 'c';
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            o++;
            mid = it.first;
        }
    }
    if (n % 2 == 0 && o > 0)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n % 2 != 0 && o > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string ans = "";
        for (auto it : mp)
        {
            if (it.second % 2 == 0)
            {
                string x(it.second / 2, it.first);
                ans = ans + x;
            }
        }
        string temp = ans;
        reverse(temp.begin(), temp.end());
        if (n % 2 != 0)
        {

            string y(mp[mid], mid);
            ans = ans + y;
        }
        ans = ans + temp;
        cout << ans << endl;
    }

    return 0;
}
