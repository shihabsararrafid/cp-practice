#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <iomanip>
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
    cin.ignore();
    int in = t;
    char c;
    cin >> c;
    while (t--)
    {
        //  cout << t << endl;
        int cnt = 0;
        string str;
        map<string, int> wood;

        while (getline(cin, str))
        {
            // cout << str << endl;
            // cin >> str;
            if (str.empty())
                break;
            else
            {

                cnt++;
                if (cnt == 1 && in - 1 == t)
                {
                    string newstr = "";
                    newstr += c;
                    newstr += str;
                    // str = newstr;
                    wood[newstr]++;
                }
                else
                    wood[str]++;
            }
        }
        for (auto const &kv : wood)
        {
            cout << kv.first << " " << fixed << setprecision(4) << (kv.second * 100.0 / cnt) << endl;
        }
        if (t > 0)
            cout << "\n";
    }
    baperBariJa();
}