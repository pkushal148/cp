#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int ans = 0;
    while (!pq.empty())
    {
        int x = pq.top();
        pq.pop();

        if (pq.empty())
        {
            ans += x;
            break;
        }

        int y = pq.top();
        pq.pop();

        if (k == 0)
        {
            ans += (x - y);
        }
        else if (x - y > k)
        {
            y = y + k;
            k = 0;
            ans += (x - y);
        }
        else
        {
            k = k - (x - y);
        }
    }

    cout << ans << endl;
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
