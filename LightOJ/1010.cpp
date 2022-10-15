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
        int n, m;
        cin >> n >> m;
        if (n == 1 || m == 1)
        {
            cout << max(n, m) << endl;
        }
        else if (n == 2 || m == 2)
        {
            ll ans = (n * m) / 8;
            ans *= 4;
            cout << ans << " " << (n * m) % 8 << endl;
            ans += (n * m) % 8 >= 4 ? 4 : (n * m) % 8;
            cout << ans << endl;
        }
        else
        {
            if ((n * m) % 2 == 1)
            {
                cout << ((n * m) / 2) + 1 << endl;
            }
            else
                cout << (n * m) / 2 << endl;
        }
    }
    baperBariJa();
}