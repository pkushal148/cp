#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<string> matrix(n);

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        matrix[i] = temp;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == '#')
            {
                cout << j + 1 << " ";
                break;
            }
        }
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
