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
    int n;
    cin >> n;
    // float ans = log2(n);
    // int ans1 = log2(n);
    // if (ans == ans1)
    // {
    //     ans1--;
    // }
    // ll num = pow(2, ans1);
    // num++;
    // ll div = (num / 2);
    // div++;
    // cout << num << endl;
    // ll diff = n - num;
    // for (int i = 1; i <= num; i++)
    // {
    //     cout << i << " " << i << endl;
    //     if (diff > 0)
    //     {
    //         cout << i << " " << div << endl;
    //         diff--;
    //     }
    // }
    int div = (n / 2);
    div++;
    cout << div << endl;
    for (int i = 1; i <= div; i++)
    {
        cout << 1 << " " << i << endl;
    }
    for (int i = 2; i <= (n - div + 1); i++)
    {
        cout << i << " " << div << endl;
    }
    // cout << ans << " " << ans1 << " " << num << " " << diff << endl;
    baperBariJa();
}