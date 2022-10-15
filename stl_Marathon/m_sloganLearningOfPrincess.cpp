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
int main()
{
    LetsGoCin();
    // int n;
    // scanf("%d", &n);
    map<string, string> slogan;
    // getchar();
    // while (n--)
    // {
    //     string fline, sline;
    //     // cin >> str;
    //     getline(cin, fline);
    //     getline(cin, sline);
    //     cout << fline << endl;

    //     cout << sline << endl;
    //     //  cout << sline << "\n"
    //     //       << fline << endl;
    // }
    int n;
    // scanf("%d", &n);
    cin >> n;
   // cout << n << endl;
    // char c;
    // cin >> c;
    // getchar();
    cin.ignore();

    while (n--)
    {
        string s, m;
        getline(cin, s);
        getline(cin, m);
        slogan[s] = m;
        // cout << s << endl;
        // cout << m << endl;
        //  mp[s] = m;
        // mp[m] = s;
    }
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string output;
        getline(cin, output);
        cout << slogan[output] << endl;
    }
    baperBariJa();
}