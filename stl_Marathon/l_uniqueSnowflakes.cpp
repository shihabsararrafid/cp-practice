#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <unordered_map>
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
        unordered_map<int, int> un;
        int ans = 0;
        unordered_map<int, int>::iterator it;
        for (int i = 1; i <= n; i++)
        {
            int snow;
            cin >> snow;
            un[snow]++;
            if (un[snow] == 2)
            {
                //  cout << snow << endl;
                int len = un.size();
                cout << "Len 1 " << len << endl;
                ans = max(ans, len);
                it = un.find(snow);
                //  cout << it->first << endl;
                un.erase(un.begin(), it);
                int len1 = un.size();
                cout << "Len 2 " << len1 << endl;
                un.insert({snow, 1});
            }
        }
        int len = un.size();
        ans = max(ans, len);
        cout << ans << endl;
    }
    baperBariJa();
}