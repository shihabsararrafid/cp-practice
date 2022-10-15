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
    int n, q;
    cin >> n >> q;
    vector<vector<ll>> vec(n, vector<ll>(0));
    while (q--)
    {
        ll a, n1, x;
        cin >> a;
        if (a == 0)
        {
            cin >> n1 >> x;
            vec[n1].push_back(x);
        }
        else
        {
            cin >> x;
            if (a == 1)
            {
                for (int i = 0; i < (vec[x].size()); i++)
                {
                    if (i != vec[x].size() - 1)
                        cout << vec[x][i] << " ";
                    else
                        cout << vec[x][i];
                }

                cout << endl;
            }
            else if (a == 2)
            {
                vec[x].clear();
            }
        }
    }
    baperBariJa();
}