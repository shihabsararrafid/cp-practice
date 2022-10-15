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
    set<ll> st;
    map<ll, ll> mp;
    while (q--)
    {
        int a;
        ll x;
        cin >> a;
        if (a == 0)
        {
            cin >> x;
            st.insert(x);
            cout << st.size() << endl;
            mp[x]++;
        }
        else if (a == 1)
        {
            cin >> x;
            auto pos = st.find(x);
            if (pos != st.end())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (a == 2)
        {
            cin >> x;
            st.erase(x);
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            auto low = st.lower_bound(l);
            auto high = st.upper_bound(r);
            set<ll>::iterator it;
            for (it = low; it != high; it++)
            {
                //if (*it >= l && *it <= r)
                    cout << *it << endl;
            }
        }
    }
    baperBariJa();
}