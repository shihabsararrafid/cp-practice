#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
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
set<string> dictionary;
void splitWord(string str)
{
    string word = "";
    for (auto x : str)
    {

        if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
        {
            if (x >= 'A' && x <= 'Z')
            {
                word += (x + 32);
            }
            else
                word += x;
        }
        else
        {
            dictionary.insert(word);
            //  cout << word << endl;
            word = "";
        }
    }
    dictionary.insert(word);
}
int main()
{
    LetsGoCin();

    string str;
    while (getline(cin, str))
    {
        // cout << str << endl;
        splitWord(str);
    }

    for (auto it = dictionary.begin(); it != dictionary.end(); it++)
    {
        cout << *it << '\n';
    }
    baperBariJa();
}