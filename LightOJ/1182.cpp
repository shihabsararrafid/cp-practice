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
li countOneBin(li n)
{
    int cnt = 0;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        if (rem == 1)
            cnt++;
    }
    return cnt;
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
        li cnt = countOneBin(n);
        cout << "Case " << i << ": ";
        if (cnt % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    baperBariJa();
}