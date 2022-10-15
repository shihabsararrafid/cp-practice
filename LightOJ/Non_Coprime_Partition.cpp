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
    if (n == 1 || n == 2)
    {
        cout << "No" << endl;
    }
    else
    {
         cout << "Yes" << endl;
        if (n % 2 == 0)
        {
            cout << n - 2 << " ";
            for (int i = 2; i <= n - 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << 2 << " " << 1 << " " << n << endl;
        }
        else
        {
            cout << n - 1 << " ";
            for (int i = 1; i <= n - 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << 1 << " " << n << endl;
        }
    }
    baperBariJa();
}