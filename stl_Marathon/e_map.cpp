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
    int q;
    cin >> q;
    map<string, ll> mp;
    while (q--)
    {
        int act;
        cin >> act;
        if (act == 0)
        {
            string str;
            ll x;
            cin >> str >> x;
            mp.insert({str, x});
        }
        else if (act == 1)
        {
            string str;
            cin >> str;
            if (mp.find(str) == mp.end())
                cout << 0 << "\n";
            else
                cout << mp[str] << endl;
        }
        else if (act == 2)
        {
            string str;
            cin >> str;
            mp.erase(str);
            // cout << mp[str] << endl;
        }
        else
        {
            string str1, str2;
            cin >> str1 >> str2;
            map<string, ll>::iterator it1, it2;
            it1 = mp.lower_bound(str1);
            it2 = mp.upper_bound(str2);
            while (it1 != it2)
            {
                cout << it1->first << " " << it1->second << endl;
                it1++;
            }
            // for (it = mp.begin(); it != mp.end(); it++)
            // {
            //     if (it->first >= str1 && it->first <= str2)
            //     {
            //         cout << it->first << " " << it->second << endl;
            //     }
            // }
        }
    }

    baperBariJa();
}