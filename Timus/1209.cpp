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
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        k--;
        k = (8 * k);
        k++;
        double sqr = sqrt(k);
        int sqr1 = sqrt(k);
        if (sqr == sqr1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
        //   cout << sqr << " " << sqr1 << endl;
    }
    baperBariJa();
}