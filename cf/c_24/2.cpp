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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    f--;
    k--;
    int fav = a[f];
    sort(a.begin(), a.end(), greater<int>());
    if (fav < a[k])
    {
        cout << "NO" << endl;
    }
    else if (fav > a[k])
    {
        cout << "YES" << endl;
    }
    else if (k + 1 < n && fav == a[k] && a[k] == a[k + 1])
    {
        cout << "MAYBE" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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
