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
    int n;
    cin >> n;
    int arr[5];
    while (n--)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3, greater<int>());
        // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

        if (arr[0] == arr[1])
        {
            cout << (arr[0] + arr[1] + arr[2]) / 2 << endl;
        }
        else
        {
            int diff = arr[1] + arr[2] - arr[0];
            if (diff >= 1)
                cout << arr[0] + (diff / 2) << endl;
            else
                cout << arr[1] + arr[2] << endl;
        }
    }
    baperBariJa();
}