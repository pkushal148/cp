#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <math.h>
#include <set>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    int n, val;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        ans[val - 1] = i + 1;
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
