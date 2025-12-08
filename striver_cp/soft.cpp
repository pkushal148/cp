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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalL = k * l, totS = c * d;
    int port = totalL / nl, saltP = p / np;

    cout << min(port, min(saltP, totS)) / n << endl;

    return 0;
}
