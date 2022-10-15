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
    string str[11];
    for (int i = 0; i < 10; i++)
    {
        cin >> str[i];
    }
    int a, b, c, d;
    for (int i = 0; i < 10; i++)
    {
        bool ok = false;
        for (int j = 0; j < str[i].size(); j++)
        {
            if (str[i][j] == '#')
            {
                a = i;
                c = i;
                b = j;
                d = j;
                ok = true;
                break;
            }
        }
        if (ok)
            break;
    }
   // cout << a << " " << b << endl;
    for (int k = a + 1; k < 10; k++)
    {
        if (str[k][b] == '#')
        {
            a++;
           // cout << a << endl;
        }
    }
    for (int k = b + 1; k < str[c].size(); k++)
    {
        if (str[c][k] == '#')
            d++;
    }
    // cout << a << " " < < < < " " << b << " " << d << endl;
    cout << c + 1 << " " << a + 1 << endl;
    cout << b+1 << " " << d+1 << endl;
    baperBariJa();
}