#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
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
    const double pi = acos(0.0);
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        double r1, r2, h, p;
        cin >> r1 >> r2 >> h >> p;
        double bigV = pi * r1 * r1 * p;
        double smallV = pi * r2 * r2 * h;
        double diff = (bigV - smallV) / 4.0;
        double ans = bigV - (2 * diff);
        cout << ans << endl;
    }
    baperBariJa();
}