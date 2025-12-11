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
    int a, b, count = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        count++;
    }
    cout << count;

    return 0;
}
