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
    vector<ll> arr(k);
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    ll mini = 1e18;
    ll index = -9;
    for (int i = 0; i < k; i++)
    {
        if (n % arr[i] < mini)
        {
            index = i;
            mini = n % arr[i];
        }
    }
    ll num = n / arr[index];
    // if (n % arr[index] != 0)
    //     num++;
    cout << index + 1 << " " <<num  << endl;
    baperBariJa();
}