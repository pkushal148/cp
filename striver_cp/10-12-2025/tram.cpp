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
    int n, a, b, maxi = 0, cur = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cur -= a;
        cur += b;
        maxi = max(maxi, cur);
    }
    cout << maxi << endl;

    return 0;
}
