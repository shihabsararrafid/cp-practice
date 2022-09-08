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
    while (t--)
    {
        int n, m, s1, s2, d;
        cin >> n >> m >> s1 >> s2 >> d;
        bool ok1 = true;
        bool ok2 = true;
        int dist = (n - 1) + (m - 1);
        if ((s1 - d <= 1) && (s2 - d <= 1) || (s1 + d >= n) && (s2 + d >= m) || (s1 + d >= n) && (s1 - d <= 1) || (s2 + d >= m) && (s2 - d <= 1))
            cout << -1 << endl;
        // cout << n << m << endl;
        // cout << s1 + d << endl;
        // for (int i = (s1 - d) > 0 ? (s1 - d) : 1; i <= (s1 + d); i++)
        // {
        //     // cout << i << endl;
        //     if (i <= n)
        //         // cout << i << endl;
        //         for (int j = (s2 - d) > 0 ? (s2 - d) : 1; j <= (s2 + d); j++)
        //         {
        //             if (j <= m)
        //             {
        //                 // cout << "j" << j << endl;
        //               //  cout << i << " " << j << endl;

        //                 if (i == 1 || j == m)
        //                 {

        //                     // cout << "entered" << endl;
        //                     ok1 = false;
        //                     //  break;
        //                 }
        //                 else if (j == 1 || i == n)
        //                     ok2 = false;
        //             }
        //         }
        //     // if (!ok)
        //     //     break;
        // }

        else
            cout << dist << endl;
    }
    baperBariJa();
}