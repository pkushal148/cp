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
    string s;
    cin >> s;

    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        cout << s;
    }
    else
    {
        s[0] = (s[0] - 'a') + 'A';
        cout << s;
    }

    return 0;
}
