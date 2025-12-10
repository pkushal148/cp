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
int main()
{
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '5' && s[i] <= '9')
        {
            if (i == 0 && s[i] == '9')
            {
                continue;
            }
            else
            {
                s[i] = '0' + (9 - (s[i] - '0'));
            }
        }
    }

    cout << s << endl;

    return 0;
}
