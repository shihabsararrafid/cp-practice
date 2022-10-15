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
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        cin.ignore();
        map<int, string> mp;
        vector<int> key;
        vector<string> val;
        int i = 0;
        while (cin.peek() != '\n')
        {
            int num;
            cin >> num;
            key.push_back(num);
            i++;
        }
        for (int j = 0; j < i; j++)
        {
            string str;
            cin >> str;
            val.push_back(str);
        }
        for (int j = 0; j < i; j++)
        {
            mp.insert({key[j], val[j]});
        }
        for (auto const &it : mp)
        {
            cout << it.second << endl;
        }
        if (n)
            cout << "\n";
        cin.ignore();
    }
    baperBariJa();
}