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
    int n;
    cin >> n;

    //  vector<vector<int>> arr(3, vector<int>(n + 3));
    int max = n;
    vector<int> space(n + 1, 0);
    vector<int> arr(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // arr[1][i] = i;
        // space[arr[0][i]] = (i - (n - arr[0][i])) < 0 ? 0 : i - (n - arr[0][i]);
    }
    for (int i = 0; i < n; i++)
    {
        space[arr[i]] = 1;
        if (arr[i] == max)
        {
            cout << max << " ";
            int j;
            for (j = arr[i] - 1; j >= 0; j--)
            {
                if (space[j] == 1)
                {
                    cout << j << " ";
                }
                else
                {
                    break;
                }
            }
            max = j;
            // cout << endl;
        }
        cout << endl;
    }
    // cout << endl;
    //  space.push_back(0);
    // for (int i = n; i >= 1; i--)
    // {
    //     // space.push()

    //     for (int j = 1; j <= space[i]; j++)
    //     {
    //         cout << endl;
    //     }
    //     cout << i << " ";
    //     // cout << i << " " << space[i] << endl;
    // }
    baperBariJa();
}