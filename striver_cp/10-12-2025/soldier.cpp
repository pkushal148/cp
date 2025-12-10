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
    int n, k, w;
    cin >> k >> n >> w;

    int amount = k * ((w * (w + 1)) / 2);
    if (amount >= n)
    {
        cout << amount - n;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
