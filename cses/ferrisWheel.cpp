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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int i = 0, j = n - 1, ans = 0;
    while (i <= j)
    {
        if (a[i] + a[j] > x)
        {
            j--;
        }
        else
        {
            i++;
            j--;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}
