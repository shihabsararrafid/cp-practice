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
vector<int> arr(1000001);

int main()
{
    LetsGoCin();
    int n, x;
    cin >> n >> x;
    vector<int> arr1(n);
    vector<int> chc;
    int base = log2(x);
    int power;
    if ((float)log2(x) == base)
    {
        power = x;
    }
    else
    {
        power = (int)(pow(2, base + 1) + 1e-9);
    }
    bool ok = false;
    if (power != x && x % 2 == 0)
        ok = true;
    chc.push_back(x);
    if (ok)
        chc.push_back(x + 1);
    base++;
    while (power + x <= 1000001)
    {

        power = (int)(pow(2, base) + 1e-9);
        base++;
        chc.push_back(power + x);
        if (ok)
            chc.push_back(power + x + 1);
        // cout << power << endl;
    }
    bool yes = false;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        // arr1[i] = num;
        arr[num]++;
        if (arr[num] >= 2)
            yes = true;
    }
    int cnt = 0;
    bool ok1 = false;
    if (yes)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < chc.size() && chc[i] < 100001; i++)
    {
        // cout << " fsfsfd" << endl;
        if (arr[chc[i]] > 0)
            cnt++;
        if (cnt == 2)
        {
            if (arr[x] >= 2)
                cout << 0 << endl;
            else if (arr[x] == 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
            return 0;
        }
        // cout << i << endl;
    }
    // cout << " sadfsfs" << endl;
    // cout << cnt << endl;

    cout << -1 << endl;
    // if (ok1 == false)
    // {
    //     // sort()
    //     cout << -1 << endl;
    // }

    // else
    // {
    // }
    // cout << power << endl;
    baperBariJa();
}