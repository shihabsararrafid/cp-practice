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
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    ll an2;
    if (abs(a - b) >= 10)
        cout << 0 << endl;
    else
    {
        for (ll i = a + 1; i <= b; i++)
        {
            an2 = (i) % 10;

            ans = (ans * an2) % 10;
        }
        cout << ans << endl;
    }
    baperBariJa();
}