#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
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
    string str;
    while (cin >> str)
    {
        ll len = str.size();
        //  string str1 = "";
        string str2;
        stack<string> str1;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '[')
            {
                string an = "";
                while (str[i + 1] != '[' && str[i + 1] != ']' && i < len - 1)
                {
                    an += str[i + 1];
                    // cout << str[i] << endl;
                    i++;
                }
                if (an.size() > 0)
                {
                    str1.push(an);
                }
            }
            else if (str[i] == ']')
                continue;
            else
                str2.push_back(str[i]);
        }
        while (!str1.empty())
        {
            cout << str1.top();
            str1.pop();
        }
        for (int i = 0; i < str2.size(); i++)
        {
            cout << str2[i];
        }
        cout << "\n";
    }
    baperBariJa();
}