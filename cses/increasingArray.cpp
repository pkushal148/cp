#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
const ll mod = 1e9 + 7;
int main()
{
    ll n, last = -1, ans = 0, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (last == -1)
        {
            last = temp;
        }
        else
        {
            if (last > temp)
            {
                ans += last - temp;
            }
            else
            {
                last = temp;
            }
        }
    }

    cout << ans;

    return 0;
}
