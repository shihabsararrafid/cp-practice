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
        ll n;
        cin >> n;
        double sqr = sqrt(n);
        //    cout << floor(sqr) << " " << ceil(sqr) << endl;
        ll f1 = floor(sqr);
        ll f2 = ceil(sqr);
        // cout << sqr << endl;
        if (f1 == f2)
            f1--;
        ll front = (ll)(pow(f1, 2) + 1e-9);
        ll after = (ll)(pow(f2, 2) + 1e-9);
        ll mid = (front + 1 + after) / 2;
        if (after % 2 == 0)
        {
            if (n > mid)
            {
                cout << f2 << " " << f2 - abs(mid - n) << endl;
            }
            else if (n < mid)
            {
                cout << f2 - abs((mid - n)) << " " << f2 << endl;
            }
            else
            {
                cout << f2 << " " << f2 << endl;
            }
        }
        else if (after % 2 == 1)
        {
            if (n > mid)
            {
                cout << f2 - abs((mid - n)) << " " << f2 << endl;
            }
            else if (n < mid)
            {
                cout << f2 << " " << f2 - abs(mid - n) << endl;
                
            }
            else
            {
                cout << f2 << " " << after << endl;
            }
        }
        ///  cout << front << " " << mid << endl;
    }
    baperBariJa();
}