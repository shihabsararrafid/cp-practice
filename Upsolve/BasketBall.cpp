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
    ll k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int ans = 0;
    int strt = 0;
    for (int i = arr.size() - 1; i >= strt; i--)
    {
        // ll sum = arr[i];
        // cout << i << endl;
        if (arr[i] > k)
        {
            ans++;
            n--;
            continue;
        }
       /// cout << "answer" << ans << endl;
        ll div = (k / arr[i]) + 1;
       // cout << div << endl;
        if (div <= n)
        {
            ans++;
            // arr.erase(arr.begin(), arr.begin() + div - 1);
            strt += div - 1;
            //  i -= div;
            // i++;
            n -= div;
        }
    }
    cout << ans << endl;
    baperBariJa();
}