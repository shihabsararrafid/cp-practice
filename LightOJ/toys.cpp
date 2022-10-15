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
    ll n, k;
    cin >> n >> k;
    if (k <= n)
    {
        // cout << "jhdjhf" << endl;
        cout << (k - 1) / 2 << endl;
    }

    // else if (k == n)
    // {

    else if (k - n >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (n - k + n + 1) / 2 << endl;
        // cout << (k - n + 1) / 2 << endl;
    }
    baperBariJa();
}