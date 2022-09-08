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
    int n;
    cin >> n;
    string row;
    cin >> row;
    int len = n;
    // bool ok = true;
    //  cout << n << " " << row[0];
    int sum0 = 0, sum1 = 0;
    bool ok;
    if (n == 1)
    {
        if (row[0] == '0')
            ok = false;
        else
            ok = true;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ok = true;
            sum1 = 0, sum0 = 0;
            if (row[i] == '0')
            {
                int j;
                sum0++;
                for (j = i + 1; j < n; j++)
                {
                    if (row[j] == row[i])
                    {
                        sum0++;
                    }
                    else
                        break;
                }
                i = j;
                // cout << "sum0"
                //   << " " << sum0 << endl;
                if (sum0 >= 3)
                {
                    ok = false;
                }
            }
            else if (row[i] == '1')
            {
                int j;
                sum1++;
                for (j = i + 1; j < n; j++)
                {
                    if (row[j] == row[i])
                    {
                        sum1++;
                    }
                    else
                        break;
                }
                i = j;
               // cout << sum1 << endl;
                if (sum1 >= 2)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                i--;
                continue;
            }
            else
            {
                break;
            }
        }
    }
    if ((row[0] == '0' && row[1] == '0') || (row[n - 1] == '0' && row[n - 2] == '0'))
        ok = false;
    if (ok)
    {

        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    baperBariJa();
}