#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int fc, fl;
        cin >> fc >> fl;
        int total = abs(fc - fl) + (fc - 0);
        int res = total * 4;
        res += ((3 * 3) + (10));
        cout << "Case " << i << ": " << res << endl;
    }
    baperBariJa();
}