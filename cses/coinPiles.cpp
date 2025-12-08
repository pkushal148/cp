#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    int t;
    ll m, n;
    cin >> t;

    while (t > 0)
    {
        cin >> m >> n;
        ll x = (2 * m) - n;
        ll y = (2 * n) - m;
        if (x >= 0 && y >= 0 && x % 3 == 0 && y % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}
