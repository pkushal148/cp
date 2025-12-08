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
    ll n;
    cin >> n;
    if (n > 1 && n < 4)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (int i = 2; i <= n; i = i + 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i = i + 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}
