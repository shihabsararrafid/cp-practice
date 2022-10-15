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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 4)
        {
            cout << 2 << " " << 1 << " " << 3 << " " << 4 << endl;
        }
        else if (n == 5)
        {
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
        }
        else if (n == 6)
        {
            cout << 4 << " " << 5 << " " << 1 << " " << 2 << " " << 3 << " " << 6 << endl;
        }
        else
        {
            int end = n;
            int end1 = (n - 1 - 1), end2 = 1;
            // if (n == 7)
            // {
            //     end1 = 4;
            //     end2 = 2;
            // }
            // else if (n == 5)
            // {
            //     end1 = 4;
            //     end2 = 2;
            // }
            // else
            // {
            //     end2;
            //     int tmp = 3;
            //     int tmp2 = (n - 1 - 3);
            //     end1 = max(tmp2, tmp);
            //     end2 = min(tmp2, tmp);
            // }
            for (int i = n - 1; i > 4; i--)
            {
                if (i != end1 & i != end2)
                {
                    cout << i << " ";
                }
            }
            if (n % 2 == 0)
            {
                cout << 2 << " " << 3 << " " << 4 << " ";
            }
            else
            {
                cout << 4 << " " << 3 << " " << 2 << " ";
            }

            cout << end2 << " " << end1 << " " << end << endl;

            // else
            // {
            //     for (int i = n - 2; i >= 1; i--)
            //     {
            //         if (i != 2)
            //             cout << i << " ";
            //     }
            //     cout << 2 << " " << n - 1 << " " << n << endl;
            // }
        }
    }
    baperBariJa();
}