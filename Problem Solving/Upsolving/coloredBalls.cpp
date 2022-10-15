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
        int n;
        cin >> n;
        int index = -1;
        int big = -10000;
        vector<int> arr(n + 5);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] > big)
            {
                big = arr[i];
                index = i;
            }
        }
        cout << index << endl;
    }
    baperBariJa();
}