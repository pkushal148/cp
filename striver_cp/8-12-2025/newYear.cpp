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
    vector<int> cord(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> cord[i];
    }
    sort(cord.begin(), cord.end());

    cout << abs(cord[1] - cord[0]) + abs(cord[1] - cord[2]);

    return 0;
}
