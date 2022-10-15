#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define lp1(i, n) for (int i = 1; i <= n; i++)
#define lp2(i, n) for (int i = 0; i < n; i++)
#define prnt(a) cout << a
int main()
{
    LetsGoCin();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        double
            v1,
            v2, v3, a1, a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        double
            d1 = (v1 * v1 * .5) / (a1);
        double
            d2 = (v2 * v2 * .5) / (a2);
        double
            t1 = ((d1)) / (v1 * .5);
        double
            d3 = t1 * v3;
        cout << d1 + d2 << " " << d2 << endl;
        printf("Case %d: %lf %lf\n", i, d1 + d2, d3);
    }
    baperBariJa();
}