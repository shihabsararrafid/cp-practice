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
vector<int> Prime;
int n = 15000000;
void sieve()
{
    vector<bool> is_Prime(n + 1, true);
    Prime.push_back(2);
    for (int i = 4; i <= n; i += 2)
    {
        is_Prime[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (is_Prime[i])
        {
            Prime.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                is_Prime[j] = false;
            }
        }
    }
    for (int i = sqrt(n); i <= n; i++)
    {
        if (is_Prime[i])
            Prime.push_back(i);
    }
    // for(i=3;i<)
}
int main()
{
    sieve();
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Prime[n - 1] << endl;
    }
    baperBariJa();
}