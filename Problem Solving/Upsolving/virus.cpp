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
        li n, m;
        cin >> n >> m;
        vector<li> house(m);
        // cin >> house[0];
        vector<li> diff;
        for (li i = 0; i < m; i++)
        {
            cin >> house[i];
        }
        for (li i = 0; i < m; i++)
        {
            // cout << house[i] << " ";
        }
        //  cout << endl;
        sort(house.begin(), house.end());
        // for (li i = 0; i < m; i++)
        // {
        //     cout << house[i] << " ";
        // }
        // cout << endl;
        for (li i = 1; i < m; i++)
        {
            diff.push_back(house[i] - house[i - 1] - 1);
        }
        diff.push_back((n - house[m - 1]) + (house[0] - 1));
        sort(diff.begin(), diff.end(), greater<li>());
        for (li i = 0; i < diff.size(); i++)
        {
            //cout << diff[i] << " ";
        }
       // cout << endl;
        ll uninfected = 0;
        
        for (int i = 0, day = 0; i < m; i++, day += 2)
        {
            // cout << diff[i] << endl;
            diff[i] = diff[i] - (day * 2);
            if (diff[i] == 1)
            {
                uninfected++;
            }
           // cout << diff[i] << endl;
            uninfected += ((diff[i] - 1) > 0 ? diff[i] - 1 : 0);
           // cout << uninfected << endl;
            //cout << " finished " << endl;
        }
        cout << n - uninfected << endl;
        // cout << endl;
    }

    baperBariJa();
}