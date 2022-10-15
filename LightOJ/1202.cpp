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
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        ll diff1 = abs(r1 - r2);
        ll diff2 = abs(c1 - c2);
        ll sum = diff1 + diff2;
        if (sum % 2 == 0)
        {
            if (diff1 == diff2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }
    baperBariJa();
}