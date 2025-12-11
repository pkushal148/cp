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

    int t, n, a, b, count;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        count = 0;
        while (1)
        {
            if (a > n || b > n)
            {
                break;
            }
            if (a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
