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
double cosineRule(double l1, double l2, double l3)
{
    double l = (l1 * l1) + (l2 * l2) - (l3 * l3);
    l /= (2 * l1 * l2);
    double theta = acos(l);
    return theta;
}
int main()
{
    LetsGoCin();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        double r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        double r1r2 = r1 + r2;
        double r2r3 = r2 + r3;
        double r1r3 = r1 + r3;
        double theta1 = cosineRule(r1r2, r1r3, r2r3);
        double theta2 = cosineRule(r1r2, r2r3, r1r3);
        double theta3 = cosineRule(r2r3, r1r3, r1r2);
        double ar1 = .5 * r1 * r1 * theta1;
        double ar2 = .5 * r2 * r2 * theta2;
        double ar3 = .5 * r3 * r3 * theta3;
        double perim = r1r2 + r2r3 + r1r3;
        perim /= 2.0;
        double areaTri = sqrt((perim * (perim - r1r2) * (perim - r2r3) * (perim - r1r3)));
        cout << fixed << setprecision(6) << areaTri - (ar1 + ar2 + ar3) << endl;
    }
    baperBariJa();
}