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
    int n, val;
    cin >> n;

    while (n--)
    {
        cin >> val;
        vector<int> temp;
        int count = 0;
        while (val != 0)
        {
            int rem = val % 10;
            if (rem != 0)
            {
                temp.push_back(rem * (pow(10, count)));
            }
            count++;
            val = val / 10;
        }
        cout << temp.size() << endl;
        for (auto it : temp)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
