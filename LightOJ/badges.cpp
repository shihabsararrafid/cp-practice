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
    int b, g, n;
    cin >> b >> g >> n;
    int mini, maxi;
    mini = min(b, g);
    maxi = max(b, g);
    if (n <= mini)
        cout << n + 1 << endl;
    else if (mini < n && maxi > n)
    {
        cout << mini + 1 << endl;
    }
    // else if (mini < n)
    // {
    //     cout << mini + 1 << endl;
    // }
    // else if(n>maxi&&n>mini){

    // }
    else
    {
        int diff = max(maxi + mini, n) - min(maxi + mini, n);
        // int ans = (n + 1 - diff);
        cout << diff + 1 << endl;
    }

    baperBariJa();
}