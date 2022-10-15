#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
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
    int m, n;
    cin >> m >> n;
    map<string, ll> chart;
    while (m--)
    {
        string key;
        ll value;
        cin >> key >> value;
        chart[key] = value;
    }

    while (n--)
    {
        int heyPoints = 0;
        char c;
        cin >> c;
        //  cout << c << endl;
        string word = "";
        while (c != '.')
        {
            string str;
            cin >> str;
            // cout << c + str << endl;
            word = c + str;
            if (chart.find(word) != chart.end())
            {
                heyPoints += chart[word];
                word = "";
            }
            //  cout << word << endl;
            //  word = "";
            // if (isspace(c))
            // {
            //
            // }
            // else
            // {
            //     word += c;
            // }
            // cout << word << endl;
            cin >> c;
        }
        cout << heyPoints << endl;
    }
    baperBariJa();
}