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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double perim = d + b + a - c;
        perim /= 2.0;
        double areaTri = sqrt((perim * (perim - b) * (perim - d) * (perim - a + c)));
        double areaQua = 2.0 * areaTri * c;
        areaQua = areaQua / (a - c);
        cout << fixed << setprecision(6) << abs(areaTri + areaQua) << endl;
    }
    baperBariJa();
}