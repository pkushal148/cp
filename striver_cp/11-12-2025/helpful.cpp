#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
    {
        if (it == '+')
        {
            continue;
        }
        else
        {
            mp[it]++;
        }
    }
    string ans = "";
    for (auto it : mp)
    {
        int n = it.second;
        char x = it.first;
        while (n--)
        {
            ans += x;
            ans += '+';
        }
    }
    cout << ans.substr(0, ans.size() - 1);
    return 0;
}
