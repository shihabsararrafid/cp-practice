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
    vector<ll> vec(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    if (n == 1)
    {
        cout << vec[0] << endl;
        return 0;
    }
    ll sum = 0;
    // cout << vec[1] - 1 << endl;
    if (vec[0] >= vec[1])
    {
        vec[0] = (vec[1] - 1) >= 0 ? (vec[1] - 1) : 0;
    }
    ll present = 1e18;
    sum = 0;
    ll zero = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        // if (vec[i] < vec[i + 1])
        //     sum += vec[i];
        //     else if
        present = min(present - 1, vec[i]);
        present = max(zero, present);
        sum += present;
    }
    // if (vec[n - 1] <= vec[n - 2])
    // {
    //     vec[n - 1] = 0;
    // }

    // ll maxi = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // if (vec[i] < 0)
    //     // {
    //     //     maxi = max(maxi, sum);
    //     //     sum = 0;
    //     // }
    //     // else
    //     //     sum += vec[i];
    //     cout << vec[i] << " ";
    // }
    // cout << "\n";
    cout << sum << " ";
    baperBariJa();
}