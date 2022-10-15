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
    ll n, k;
    cin >> n >> k;
    vector<ll> box(k);
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
    }
    sort(box.begin(), box.end());
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        double num = (double)n / (double)box[k - 1];
       // cout << num << endl;
        ll ans = ceil(num);
        cout << 1 << " " << ans << endl;
    }
    baperBariJa();
}