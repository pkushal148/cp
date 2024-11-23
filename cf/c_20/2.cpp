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
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int p, q = -1;
    p = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % p != 0 && a[i] % q != 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (i != 0 && a[i] % p != 0 && q == -1)
        {
            q = a[i];
        }
    }

    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }

    return 0;
}
