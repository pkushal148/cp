#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main()
{
    long long n, i = 1;
    cin >> n;
    while (i <= n)
    {
        long long total = (i * i) * (i * i - 1) / 2, rep = 4 * (i - 1) * (i - 2);
        cout << total - rep << endl;
        i++;
    }
    return 0;
}
