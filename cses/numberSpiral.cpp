#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    long long t;
    cin >> t;

    while (t > 0)
    {
        long long x, y;
        cin >> x >> y;

        if (x >= y)
        {
            if (x % 2 == 0)
            {
                cout << (x * x) - y + 1 << endl;
            }
            else
            {
                cout << ((x - 1) * (x - 1)) + y << endl;
            }
        }
        else
        {
            swap(x, y);
            if (x % 2 == 0)
            {
                cout << ((x - 1) * (x - 1)) + y << endl;
            }
            else
            {
                cout << (x * x) - y + 1 << endl;
            }
        }
        t--;
    }

    return 0;
}
