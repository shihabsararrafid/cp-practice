#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>
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
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": " << endl;
        string defaultstr = "http://www.lightoj.com/";

        stack<string> f, b;
        b.push(defaultstr);
        while (1)
        {
            string act;
            cin >> act;
            if (act == "QUIT")
                break;
            else if (act == "VISIT")
            {
                string url;
                cin >> url;
                cout << url << endl;
                b.push(url);
                while (!f.empty())
                    f.pop();
            }
            else if (act == "BACK")
            {
                //   if (b.empty() || b.size() <= 1)

                if (b.size() > 1)

                {
                    string fst = b.top();
                    b.pop();
                    f.push(fst);
                    cout << b.top() << endl;
                }
                else
                {
                    cout << "Ignored" << endl;
                }
            }
            else if (act == "FORWARD")
            {
                if (f.empty())
                    cout << "Ignored" << endl;
                else
                {
                    string fst = f.top();
                    f.pop();
                    b.push(fst);
                    cout << fst << endl;
                }
            }
        }
    }
    baperBariJa();
}