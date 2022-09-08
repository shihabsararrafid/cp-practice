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
    int x;
    cin >> x;
    int hr, min, res = 0;
    cin >> hr >> min;
    while (1)
    {
        if (hr % 10 == 7 || min % 10 == 7)
            break;
        else
        {
            min -= x;
            res++;
            if (min < 0)
            {
                min += 60;
                hr -= 1;
                if (hr < 0)
                    hr = 23;
            }
        }
    }
    cout << res << endl;

    baperBariJa();
}