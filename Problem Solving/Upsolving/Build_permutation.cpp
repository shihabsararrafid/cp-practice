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

// void perfectSquares(float r)
// {

//     // For every element from the range
//     for (int i = 0; i <= r; i++)
//     {

//         // If current element is
//         // a perfect square
//         if (sqrt(i) == (int)sqrt(i))
//             PerfecatSquares.push_back(i);
//     }
// }
int main()
{
    //  perfectSquares(1e5);
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> PerfecatSquares;
        vector<int> result(n + 5);
        int max = 2 * (n - 1);
        for (int i = 0; i * i <= max; i++)
        {
            PerfecatSquares.push_back(i * i);
        }
        vector<bool> is_Checked(n + 3, false);
        int j = PerfecatSquares.size();
        j--;
        for (int i = n - 1; i >= 0; i--)
        {
            // cout << i << "  " << PerfecatSquares[j] << " " << PerfecatSquares[j] - i << "  " << max << endl;
            // cout << PerfecatSquares[j] - i << endl;
            while ((PerfecatSquares[j] - i) >= n || is_Checked[PerfecatSquares[j] - i] == true)
            {
                // cout << " entered" << endl;
                j--;
            }
            // cout << PerfecatSquares[j] - i << endl;
            result[PerfecatSquares[j] - i] = i;
            is_Checked[PerfecatSquares[j] - i] = true;
        }
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    baperBariJa();
}