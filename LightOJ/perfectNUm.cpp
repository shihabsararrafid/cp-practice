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
vector<ll> ans;

int digitSum(ll k)
{
    int sum = 0;
    while (k != 0)
    {
        sum += (k % 10);
        k /= 10;
    }
    return sum;
}
void getElement()
{
    for (ll i = 19; ans.size() <= 10000; i += 9)
    {
        if (digitSum(i) == 10)
            ans.push_back(i);
    }
}
int main()
{
    getElement();
    LetsGoCin();

    int k;
    cin >> k;
    int diff = 10 - digitSum(k);
    cout << ans[k - 1] << endl;

    baperBariJa();
}