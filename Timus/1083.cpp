#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
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
    int n;
    string str;
    cin >> n >> str;
    int len = str.size();
    ll ans = 1;
    while (n > 0)
    {
        ans *= n;
        n -= len;
    }
    int i = 1;
    // if (n % len != 0)
    // {
    //     ll mul = n - i * len;
    //     while (mul > 1)
    //     {
    //         ans *= mul;
    //         i++;
    //         mul = n - i * len;
    //     }
    //     cout << ans << endl;
    // }
    // else
    // {
    //     ll mul = n - i * len;
    //     while (mul > 2)
    //     {
    //         ans *= mul;
    //         i++;
    //         mul = n - i * len;
    //     }
    //     cout << ans * 2 << endl;
    // }
    cout << ans << endl;
    baperBariJa();
}