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
    unordered_map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    if (mp.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
