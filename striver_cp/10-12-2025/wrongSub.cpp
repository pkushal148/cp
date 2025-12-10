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
    int n, k;
    cin >> n >> k;

    while (k > 0)
    {
        int rem = n % 10;
        if (rem >= k)
        {
            n -= k;
            k = 0;
        }
        else
        {
            n -= rem;
            k = k - rem;
        }
        if (k > 0)
        {
            n = n / 10;
            k--;
        }
    }

    cout << n;
    return 0;
}
