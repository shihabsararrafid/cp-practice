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
int getDecimal(vector<int> Binary)
{
    int num = 0;
    for (int i = 0; i < Binary.size(); i++)
    {
        int pw = (int)(pow(2, i) + 1e-9);
        num += (Binary[i] * pw);
    }
    return num;
}
int main()
{
    LetsGoCin();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll n;
        cin >> n;
        vector<int> Binary;
        while (n != 0)
        {
            ll rem = n % 2;
            //  cout << rem << endl;
            Binary.push_back(rem);
            n = n / 2;
            // cout << n << endl;
        }
        int index = -1;
        bool ok = false;
        for (int i = 0; i < Binary.size(); i++)
        {
            cout << Binary[i];
        }

        cout
            << endl;
        //   reverse(Binary.begin(), Binary.end());
        for (int i = 0; i < Binary.size() - 1; i++)
        {
            //  cout << Binary[i];
            if (Binary[i] == 1 && Binary[i + 1] == 0)
            {
                index = i + 1;
                ok = true;
                Binary[i] = 0;
                Binary[i + 1] = 1;
                break;
            }
        }
        //   cout
        //  << endl;
        // if (index != -1)
        //     Binary.insert(Binary.begin() + index, 1);
        if (!ok)
        {
            //   Binary[Binary.size() - 1] = 0;
            Binary.insert(Binary.begin(), 0);
            // int i = 0;
            // int j = 0;
            // while (Binary[i] == 0)
            // {
            //     j++;
            //     i++;
            // }
            // for (int k = 0; k < j; k++)
            // {
            //     Binary[k] = 1;
            // }
            // for (int k = j, m = 0; m < j; m++, k++)
            //     Binary[k] = 0;
        }
        if (ok)
        {
            int i = 0;
            int j = 0;
            while (Binary[i] == 0)
            {
                j++;
                i++;
            }
            if (j >= 0)
            {
                Binary[j] = 0;
                Binary[0] = 1;
            }
            // cout << j << endl;
        }
        for (int i = 0; i < Binary.size(); i++)
        {
            cout << Binary[i];
        }

        cout
            << endl;
        cout << getDecimal(Binary) << endl;
    }
    // 11011110100001
    baperBariJa();
}