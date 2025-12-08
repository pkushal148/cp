#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    if ((n * (n + 1)) % 4 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        long long sum = (n * (n + 1)) / 4;
        int temp = n;
        set<int> s;
        while (sum > 0)
        {
            long long mini = min(n * 1ll, sum);
            sum = sum - mini;
            n = n - 1;
            if (mini - 1 < n)
            {
                n = mini - 1;
            }
            s.insert(mini);
        }

        cout << s.size() << endl;
        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << endl
             << temp - s.size() << endl;

        for (int i = 1; i <= temp; i++)
        {
            if (s.find(i) == s.end())
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
