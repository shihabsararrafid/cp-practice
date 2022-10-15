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
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    float sum = 0;
    int arr1[6] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[arr[i]]++;
        sum += arr[i];
    }
    float avg = sum / (float)n;
    float ans = round(avg);
    if (ans == 5)
        cout << 0 << endl;

    baperBariJa();
}