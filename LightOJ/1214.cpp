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
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        string str;
        cin >> str;
        ll num;
        cin >> num;
        ll rem = 0;
        int j = 0;
        if (str[0] == '-')
            j = 1;
        if (num < 0)
            num = abs(num);
        for (int i = j; i < str.size(); i++)
        {
            //  rem = rem * 10 + number;
            int number = str[i] - '0';
            rem = rem * 10 + number;
            // rem += (number % num);
            rem = rem % num;
          //  cout << number << endl;
        }
        if (rem == 0)
            cout << "divisible" << endl;
        else
            cout << "not divisible" << endl;
    }
    baperBariJa();
}