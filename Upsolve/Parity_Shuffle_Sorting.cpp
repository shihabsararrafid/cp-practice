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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int, int> ind;
        vector<ll> odd;
        vector<ll> even;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        cout << n - 1 << endl;
        if (arr[0] % 2 == 0)
        {
            if (even.size() > 1)
            {
                cout << 1 << " " << even[even.size() - 1] + 1 << endl;
            }
            for (int i = 0; i < odd.size(); i++)
            {
                cout << 1 << " " << odd[i] + 1 << endl;
            }
            for (int i = 1; i < even.size() - 1; i++)
                cout << even[i] + 1 << " " << even[even.size() - 1] + 1 << endl;
        }
        else if (arr[0] % 2 == 1)
        {
            if (odd.size() > 1)
            {
                cout << 1 << " " << odd[odd.size() - 1] + 1 << endl;
            }
            for (int i = 0; i < even.size(); i++)
            {
                cout << 1 << " " << even[i] + 1 << endl;
            }
            for (int i = 1; i < odd.size() - 1; i++)
                cout << odd[i] + 1 << " " << odd[odd.size() - 1] + 1 << endl;
        }
    }

    baperBariJa();
}