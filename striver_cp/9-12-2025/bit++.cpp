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
    int n;
    cin >> n;

    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        for (auto it : s)
        {
            if (it == '+')
            {
                x++;
                break;
            }
            else if (it == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x << endl;
    return 0;
}
