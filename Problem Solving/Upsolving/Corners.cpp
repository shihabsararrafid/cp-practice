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
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int count = 0;
        cin >> n >> m;
        char str[505][505];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> str[i][j];
                if (str[i][j] == '1')
                {
                    count++;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << str[i][j] << " ";
        //     }
        // }
        // cout << endl;
        int num0 = -199, num1 = 0;
        int res = 0;
        int cnt1;
        for (int i = 0, j = 0; j < m - 1; j++)
        {
            int cnt0 = 0;
            // cout << str[i][j] << " ";
            // cout << str[i][j + 1] << endl;
            // cout << str[i + 1][j] << " ";
            // cout << str[i + 1][j + 1] << endl;
            // cout << " End" << endl;
            if (str[i][j] == '0')
                cnt0++;
            if (str[i + 1][j + 1] == '0')
                cnt0++;
            if (str[i][j + 1] == '0')
                cnt0++;
            if (str[i + 1][j] == '0')
                cnt0++;

            //  cout << cnt0 << endl;
            num0 = max(num0, cnt0);
            if (j == m - 2 && i == n - 2)
                break;
            if (j == m - 2)
            {
                i++;
                j = -1;
            }
        }
        //  cout << "Finished" << endl;
        // cout << num0 << endl;
        num1 = 4 - num0;

        if (num1 == 1)
            res++;
        else if (num1 == 0)
            res = 0;
        else
            res += 2;

        cnt1 = count - num1;
        res += cnt1;

        cout << res << endl;
    }
    baperBariJa();
}
