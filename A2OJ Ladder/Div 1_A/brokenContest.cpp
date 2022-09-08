#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
    //"Danil", "Olya", "Slava", "Ann" and "Nikita".
    LetsGoCin();
    string str;
    cin >> str;
    int len = str.size();
    int fnd = 0;
    for (int i = 0; i < len; i++)
    {
        if (len - i + 1 >= 5)
        {
            if (str[i] == 'D' && str[i + 1] == 'a' && str[i + 2] == 'n' && str[i + 3] == 'i' && str[i + 4] == 'l')
            {
                fnd++;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (len - i + 1 >= 5)
        {
            if (str[i] == 'S' && str[i + 1] == 'l' && str[i + 2] == 'a' && str[i + 3] == 'v' && str[i + 4] == 'a')
            {
                fnd++;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (len - i + 1 >= 6)
        {
            if (str[i] == 'N' && str[i + 1] == 'i' && str[i + 2] == 'k' && str[i + 3] == 'i' && str[i + 4] == 't' && str[i + 5] == 'a')
            {
                fnd++;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (len - i + 1 >= 3)
        {
            if (str[i] == 'A' && str[i + 1] == 'n' && str[i + 2] == 'n')
            {
                fnd++;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (len - i + 1 >= 4)
        {
            if (str[i] == 'O' && str[i + 1] == 'l' && str[i + 2] == 'y' && str[i + 3] == 'a')
            {
                fnd++;
            }
        }
    }

    if (fnd == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    baperBariJa();
}