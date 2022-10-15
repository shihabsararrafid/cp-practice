#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
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
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        // vector<string> student;
        // vector <
        cout << "Case " << i << ": ";
        multimap<ll, string> info;
        for (int i = 1; i <= n; i++)
        {
            string str;
            li dimension;
            int a, b, c;
            cin >> str;
            cin >> a >> b >> c;
            dimension = a * b * c;
            // cout << str << " " << dimension << endl;
            info.insert({dimension, str});
            /* code */
        }
        string str2;
        for (auto itr = info.rbegin();; itr++)
        {
            str2 = itr->second;
            break;
        }
        auto itr1 = info.begin();
        string str1 = itr1->second;
        //  cout << itr1->first << " " << itr1->second << endl;

        int cnt = info.count(itr1->first);
        // itr1 = info.rbegin();
        if (cnt == 1)
        {

            cout << str2
                 << " took chocolate from " << str1 << endl;
        }
        else
        {
            cout << "no thief" << endl;
        }
        //  cout << info.count(itr1->first) << endl;
        // for (auto itr = info.begin();; ++itr)
        // {

        //     break;
        // }
    }
    baperBariJa();
}