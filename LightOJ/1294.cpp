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

        ll m, n;
        cin >> n >> m;
        ll sum = ((n * (n + 1)) / 2);
        ll sum1 = 0;
        int j = 0;
        for (int l = m; l <= n; l += j)
        {
            sum1 += (((l * (l + 1)) / 2) - ((j * (j + 1)) / 2));
            //cout << l << " " << j << " " << sum1 << endl;
            j = l + m;
        }
        cout << sum - (sum1 * 2) << endl;
    }
    baperBariJa();
}