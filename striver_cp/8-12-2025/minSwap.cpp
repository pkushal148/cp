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
    int n, maxi = INT_MIN, maxiInd, mini = INT_MAX, miniInd, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (maxi < val)
        {
            maxi = val;
            maxiInd = i;
        }
        if (mini >= val)
        {
            mini = val;
            miniInd = i;
        }
    }
    int swaps = 0;
    if (maxiInd < miniInd)
    {
        swaps += (maxiInd) + (n - 1 - miniInd);
    }
    else
    {
        swaps += (maxiInd) + (n - 1 - miniInd) - 1;
    }
    cout << swaps << endl;
    return 0;
}
