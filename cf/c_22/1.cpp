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
    string s;
    cin >> s;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            x = 1;
            continue;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (x == 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
        {
            if (s[i] > s[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] >= '0' && s[i] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9')
        {
            if (s[i] > s[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
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
