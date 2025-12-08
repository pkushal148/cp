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
vector<string> solve(int n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }

    vector<string> preGray = solve(n - 1);
    reverse(preGray.begin(), preGray.end());

    vector<string> ans;
    for (auto it : preGray)
    {
        ans.push_back("0" + it);
        ans.push_back("1" + it);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    vector<string> ans = solve(n);
    for (auto it : ans)
    {
        cout << it << endl;
    }
    return 0;
}
