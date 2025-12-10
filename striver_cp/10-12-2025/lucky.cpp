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
    string n;
    int ans = 0;
    cin >> n;
    for (auto it : n)
    {
        if (it == '4' || it == '7')
        {
            ans++;
        }
    }
    if (ans == 4 || ans == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
