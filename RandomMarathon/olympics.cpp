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
        double pi = 2 * acos(0.0);
        int a, b;
        char c;
        cin >> a >> c >> b;
        double vg = (double)400 / (pi);
        // vg = sqrt(vg);
        int an = ((a * a) + (b * b));
        double bn = sqrt((double)an);
        double length = (((double)a) / bn);
        cout << length << endl;
    }
    baperBariJa();
}