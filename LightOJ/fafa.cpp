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
    string str;
    cin >> str;
    int x = 0, y = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'R')
            x++;
        else if (str[i] == 'U')
            y++;

        if (x == y && i < n-1 && str[i + 1] == str[i])
            res++;
    }
    cout << res << endl;
    baperBariJa();
}