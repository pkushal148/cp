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
    ll n, ans = 0;
    cin >> n;
    while (n != 0)
    {
        n = n / 5;
        ans += n;
    }
    cout << ans << endl;
    return 0;
}
