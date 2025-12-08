#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    int n, res = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res = (res * 2) % mod;
    }
    cout << res;
    return 0;
}
