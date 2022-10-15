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
ll getDecimalToBinary(ll n)
{
    ll num = 0;
    int i = 0;
    while (n != 0)
    {
        ll rem = n % 10;
        int pw = 0;
        if (rem != 0)
            pw = (int)(pow(2, i) + 1e-9);
       // cout << pw << endl;
        num += pw;
        i++;
        n /= 10;
    }
    return num;
}
int main()
{
    LetsGoCin();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll num1, num2, num3, num4;
        char c1, c2, c3, c4;
        cin >> num1 >> c1 >> num2 >> c2 >> num3 >> c3 >> num4;
       // cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
        ll num5, num6, num7, num8;
        char c5, c6, c7, c8;
        cin >> num5 >> c5 >> num6 >> c6 >> num7 >> c7 >> num8;
       // cout << num5 << " " << num6 << " " << num7 << " " << num8 << endl;

        // char str5[9], str2[9], str3[9], str4[9];
        // string str;
        // cin >> str;
        if (num1 == getDecimalToBinary(num5) && num2 == getDecimalToBinary(num6) && num3 == getDecimalToBinary(num7) && num4 == getDecimalToBinary(num8))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
       // cout << getDecimalToBinary(num6) << endl;
       // cout << endl;
        // cout << str;
        // for (int i = 0; i < str.size();)
        // fgets()
    }
    baperBariJa();
}