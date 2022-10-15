#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <queue>
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
    // 1 2 3 4 5 6 7
    LetsGoCin();
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            return 0;
        queue<int> qt;
        for (int i = 1; i <= n; i++)
        {
            qt.push(i);
        }
        cout << "Discarded cards:";
        while (qt.size() > 1)
        {
            cout << " " << qt.front();
            qt.pop();
            int x = qt.front();
            qt.pop();
            if (!qt.empty())
                cout << ",";
            qt.push(x);
        }
        // if (qt.size() > 1)
        // {
        //     cout << qt.front();
        //     qt.pop();
        // }
        cout << endl;

        cout << "Remaining card: " << qt.front() << endl;
    }
    baperBariJa();
}