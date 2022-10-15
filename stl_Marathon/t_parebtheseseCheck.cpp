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
        string str;
        getline(cin, str);
        // cout << str << endl;
        int len = str.size();
        stack<char> parenthesis;
        //  bool yes = false;
        //   map<char, int> parenthesis;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '(' || str[i] == '[')
            {
                parenthesis.push(str[i]);
            }
            else if (str[i] == ')' && !parenthesis.empty() && parenthesis.top() == '(')
            {
                // if (parenthesis.empty() || parenthesis.top() == '[')
                // {
                //     // yes = true;
                //     break;
                // }
                // else
                parenthesis.pop();
            }
            else if (str[i] == ']' && !parenthesis.empty() && parenthesis.top() == '[')
            {
                // if (parenthesis.empty() || parenthesis.top() == '(')
                // {
                //     //  yes = true;
                //     break;
                // }
                // else
                parenthesis.pop();
            }
            else
            {
                parenthesis.push(str[i]);
            }
            // if (yes)
            //   break;
            // {
            // parenthesis[str[i]]++;
            // }
            // else if (str[i] == ')')
            // {
            //     parenthesis['(']--;
            // }
            // else if (str[i] == ']')
            //     parenthesis['[']--;
        }

        //  for (auto const &it : parenthesis)
        // {
        // if (it.second < 0)
        //     yes = true;
        // cout << it.first << " " << it.second << endl;
        //  }
        // if (parenthesis['('] == parenthesis[')'] && parenthesis['['] == parenthesis[']'])
        //     //  if (yes)
        //     cout << "Yes" << endl;
        // else
        //     cout << "No" << endl;
        if (parenthesis.empty())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    baperBariJa();
}