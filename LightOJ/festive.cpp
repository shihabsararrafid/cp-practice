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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int stat[27] = {0};
    for (int i = str.size() - 1; i >= 0; i--)
    {
        //  cout << str[i] - 'A' << " " << i << endl;
        if (stat[str[i] - 'A'] == 0)
        {
            stat[str[i] - 'A'] = i;
        }
    }
    // for (int i = 0; i < 27; i++)
    //     cout << stat[i] << " ";
    int active = 0;
    vector<bool> checked(27, false);
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (i <= stat[str[i] - 'A'] && checked[str[i] - 'A'] == false)
        {

            active++;
            checked[str[i] - 'A'] = true;
        }
        // cout << active << " ";
        if (active > k)

        {
            cout << "YES" << endl;
            return 0;
        }
        if (i == stat[str[i] - 'A'] && checked[str[i] - 'A'] == true)
        {
            active--;
        }
       // cout << active << " ";
    }
    cout << "NO" << endl;
    baperBariJa();
}