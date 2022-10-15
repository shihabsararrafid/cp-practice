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
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // li arr[100005];
        vector<ll> arr(n + 5);
        li count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll left = 0;
        ll right = 1e9 + 9;///////////////////////////////////////////
        for (int i = 0; i < n; i++)
        {
            left = max(left, arr[i]);
            right = min(right, arr[i]);
            if (left - right > 2*k)
            {
                //cout << i << endl;
                count++;
                left = arr[i];
                right = arr[i];
            }
        }
        cout << count << endl;
    }
    baperBariJa();
}