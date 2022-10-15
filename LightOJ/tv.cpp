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
ll getGcd(ll n, ll m)
{
    while (m != 0)
    {
        return getGcd(m, n % m);
    }
    return n;
}
int main()
{
    LetsGoCin();
    ll w, h, n, m;
    cin >> w >> h >> n >> m;
    ll gcd = getGcd(n, m);
   // cout << gcd << endl;
    n /= gcd;
    m /= gcd;
   // cout << n << " " << m << endl;
    ll ans = min(w / n, h / m);
    cout << ans << endl;
    baperBariJa();
}