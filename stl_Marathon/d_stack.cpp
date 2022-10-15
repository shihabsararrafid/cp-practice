#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <queue>
#include <stack>
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
    int n, q;
    cin >> n >> q;
    vector<stack<ll>> stck(n);
    while (q--)
    {
        int act;
        cin >> act;
        if (act == 0)
        {
            ll t, x;
            cin >> t >> x;
            stck[t].push(x);
        }
        else
        {
            ll t;
            cin >> t;
            if (act == 1)
            {
                if (stck[t].empty() == false)
                    cout << stck[t].top() << endl;
            }
            else
            {
                if (stck[t].empty() == false)
                    stck[t].pop();
                // cout << qy[t].front() << endl;
            }
        }
    }
    baperBariJa();
}