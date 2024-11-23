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
    int x;
    cin >> x;

    vector<int> ans;

    // Counter for binary array
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            ans.push_back(0);
            x = x / 2;
        }
        else
        {
            if (x % 4 == 3)
            {
                ans.push_back(-1);
                x = (x / 2) + 1;
            }
            else
            {
                ans.push_back(1);
                x = x / 2;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
