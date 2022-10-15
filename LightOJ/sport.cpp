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
    ll maxSum = (n * (n + 1) / 2);
    if (n == 1)
        maxSum = 1;
    ll eat = 0;
    for (ll i = n; i >= 1; i--)
    {
        if (maxSum - eat == k)
            break;
        maxSum -= i;
        eat++;
    }
    cout << eat << endl;
    baperBariJa();
}