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
ll getNumber(li num)
{
    li sum = 0;
    while (num > 0)
    {
        sum *= 10;
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        li n;
        cin >> n;
        cout << "Case " << i << ": ";
        if (n == getNumber(n))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
        // cout << getNumber(n) << endl;
    }
    baperBariJa();
}