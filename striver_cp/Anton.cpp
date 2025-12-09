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
    unordered_map<string, int> mp;
    mp["Icosahedron"] = 20;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Tetrahedron"] = 4;
    int n, ans = 0;
    cin >> n;

    while (n--)
    {
        string x;
        cin >> x;
        ans += mp[x];
    }
    cout << ans;

    return 0;
}
