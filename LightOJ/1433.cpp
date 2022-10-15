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
        double ox, oy, ax, ay, bx, by;
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        double r = sqrt(((abs(ox - ax) * abs(ox - ax)) + (abs(oy - ay) * abs(oy - ay))));
        double ab = sqrt(((abs(bx - ax) * abs(bx - ax)) + (abs(by - ay) * abs(by - ay))));
        double rr = r * r;
        double abab = ab * ab;
        double theta = acos(((2 * rr) - abab) / (2 * rr));
        cout << fixed << setprecision(3) << r * theta << endl;
    }
    baperBariJa();
}