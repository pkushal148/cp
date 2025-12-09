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
void printCol(vector<char> col, int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << col[i];
    }
    cout << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<char> last(m, '.'), start(m, '.'), complete(m, '#');
    last[m - 1] = '#';
    start[0] = '#';

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printCol(complete, m);
        }
        else
        {
            if (i % 4 == 0)
            {
                printCol(start, m);
            }
            else
            {
                printCol(last, m);
            }
        }
    }
    return 0;
}
