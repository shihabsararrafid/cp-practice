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
vector<vector<char>> str(101, vector<char>(101));
int countBomb(int i, int j, int n, int m)
{
    // cout << i << " " << j << endl;
    int cnt = 0;
    if (i + 1 < n)
    {
        if (str[i + 1][j] == '*')
        {
            cnt++;
        }

        if (str[i + 1][j - 1] == '*' && j - 1 >= 0)
            cnt++;
        if (str[i + 1][j + 1] == '*' && j + 1 < m)
            cnt++;
    }
    if (i - 1 >= 0)
    {
        if (str[i - 1][j] == '*')
            cnt++;
        if (str[i - 1][j - 1] == '*' && j - 1 >= 0)
            cnt++;
        if (str[i - 1][j + 1] == '*' && j + 1 < m)
            cnt++;
    }
    if (str[i][j - 1] == '*' && (j - 1) >= 0)
        cnt++;
    if (str[i][j + 1] == '*' && (j + 1) < m)
        cnt++;
    return cnt;
}
int main()
{
    LetsGoCin();
    int n, m;
    cin >> n >> m;
    // string str[100 + 1];
    // vector<vector<char>> str(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> str[i][j];
        }
    }
    bool ok = false;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '.')
            {
                int cnt = countBomb(i, j, n, m);
                if (cnt == 0)
                    continue;
                else
                {
                   // cout << "break " << i << " " << j << endl;
                    ok = true;
                    break;
                }
            }
            else if (str[i][j] != '.' && str[i][j] != '*')
            {
                int num = str[i][j] - '0';
                // cout << str[i][j] << endl;
                // cout << num << endl;
                int cnt = countBomb(i, j, n, m);
                //   cout << "cnt"
                //  << " " << cnt << endl;
                if (cnt == num)
                    continue;
                else
                {
                  //  cout << "break " << i << " " << j << " " << cnt << " " << num << endl;
                  //  cout << str[i + 1][j] << " " << str[i + 1][j - 1] << " " << str[i + //1][j + 1] << " " << str[i][j + 1] << " " << str[i][j - 1] << " " << str[i - 1][j+1] << " " << str[i - 1][j] << " " << str[i - 1][j - 1] << endl;
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
            break;
        //  cout << endl;
    }
    if (!ok)
        cout << "YES" << endl;
    else
        cout << "No" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    baperBariJa();
}