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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (min(x, y) == 0 && max(x, y) > 0 && (n - 1) % max(x, y) == 0)
        {
            int dv = (n - 1) / max(x, y);
            for (int i = 2; i <= n; i += (max(x, y)))
            {
                for (int j = 1; j <= max(x, y); j++)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    baperBariJa();
}