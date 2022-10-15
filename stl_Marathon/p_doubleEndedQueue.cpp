#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
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
        cout << "Case " << i << ": "
             << "\n";
        int len, query;
        cin >> len >> query;
        deque<int> qt;
        for (int j = 1; j <= query; j++)
        {
            // cout << query << endl;
            string act;
            cin >> act;
           // cout << act << endl;
            cin.ignore();
            if (act == "pushLeft" || act == "pushRight")
            {
                int num;
                cin >> num;
                if (qt.size() == len)
                    cout << "The queue is full" << endl;
                else if (act == "pushLeft")
                {

                    cout << "Pushed in left: " << num << endl;
                    qt.push_front(num);
                }
                else if (act == "pushRight")
                {
                    // int num;
                    // cin >> num;
                    cout << "Pushed in right: " << num << endl;
                    qt.push_back(num);
                }
            }
            else if (act == "popLeft" || act == "popRight")
            {
                // cout << query << endl;
                //  cout << qt.size() << endl;
                if (qt.size() == 0)
                    cout << "The queue is empty" << endl;
                else if (act == "popLeft")
                {
                    // int num;
                    // cin >> num;

                    cout << "Popped from left: " << qt.front() << endl;
                    qt.pop_front();
                }
                else if (act == "popRight")
                {
                    cout << "Popped from right: " << qt.back() << endl;
                    qt.pop_back();
                }
            }
           // cout << j << endl;
        }
    }
    baperBariJa();
}