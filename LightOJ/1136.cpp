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
li howManyModulo_1(li n)
{
    if (n % 3 == 0)
        return n / 3;
    else
        return (n / 3) + 1;
}
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        li n, m;
        cin >> n >> m;
        li cnt;
       /// cout << howManyModulo_1(m) << endl;
       /// cout << howManyModulo_1(n) << endl;
        cnt = howManyModulo_1(m) - howManyModulo_1(n-1);
        //     li sum1 = (n) * (n + 1) / 2;
        //     int rem = sum1 % 3;
        //     li sum = 0;
        //     li cnt = 0;
        //   //  cout << sum1 << endl;
        //     for (li j = n; j <= m; j++)
        //     {
        //         sum1 += j;
        //         if (sum1 % 3 == rem)
        //             cnt++;
        //     }
        cout << "Case " << i << ": " << (m - n + 1) - cnt << endl;
    }
    baperBariJa();
}