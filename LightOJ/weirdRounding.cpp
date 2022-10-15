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
int countZero(ll n)
{
    int cnt = 0;
    int remove = 0;
    while (n != 0)
    {
        if (n % 10 == 0)
            cnt++;
        // else
        //     remove++;
        n /= 10;
    }
    return cnt;
}
int countELemenet(ll n, int k)
{
    int cnt = 0;
    int remove = 0;
    while (cnt != k)
    {
        if (n % 10 == 0)
            cnt++;
        else
            remove++;
        n /= 10;
    }
    return remove;
}
int getLen(ll n)
{
    int len = 0;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return len;
}
int main()
{
    LetsGoCin();
    ll n;
    int k;
    cin >> n >> k;
    ll div = pow(10, k);
    //    int others = getLen(n) - countZero(n);
    if (div > n)
    {
        if (n == 0)
            cout << 0 << endl;
        else
            cout << getLen(n) - 1 << endl;
    }
    else if (div == n)
        cout << 0 << endl;
    else
    {
        if (countZero(n) < k)
            cout << getLen(n) - 1 << endl;
        else
            cout << countELemenet(n, k) << endl;
    }
    // cout << countZero(n) << endl;

    baperBariJa();
}