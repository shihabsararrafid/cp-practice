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

    // for (i = 0; i < t; i++)
    // {
    //     if (arr2[i] == 0 && (i + 1 > n))
    //     {
    //         for (j = 0; j <= i; j++)
    //         {
    //             sum = sum + arr1[j];
    //         }
    //         break;
    //     }
    // }
    // if (sum == 0)
    // {
    //     for (j = 0; j < t; j++)
    //     {
    //         sum = sum + arr1[j];
    //     }
    // }
    // printf("%ld\n", sum);

    // return 0;
    LetsGoCin();
    int n, k;
    cin >> n >> k;
    vector<int> lec(n);
    vector<int> sleep(n);
    for (int i = 0; i < n; i++)
        cin >> lec[i];
    for (int i = 0; i < n; i++)
        cin >> sleep[i];
    ll sum1 = 0;
    int index1 = -1;
    int index2 = -1;
    // for (int i = 0; i < n - k + 1; i++)
    // {
    //     ll sum = 0;
    //     if (sleep[i] == 0)
    //     {
    //         sum += lec[i] + lec[i + 1] + lec[i + 2];
    //     }
    //     if (sum > max)
    //     {
    //         index1 = i + 1;
    //         index2 = i + 2;
    //         max = sum;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        if (sleep[i] == 1)
        {
            sum1 += lec[i];
            sleep[i] = 0;
            lec[i] = 0;
        }
    }
   // cout << sum1 << endl;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll maxu = 0;
        for (int j = i; j < i + k && i + k - 1 < n; j++)
        {
            // cout << j << " ";
            maxu += lec[j];
        }
        // cout << endl;
       // cout << maxu << endl;
        sum = max(maxu, sum);
    }
    // cout << max << " " << index1 << " " << index2 << endl;
    cout << sum + sum1 << endl;
    baperBariJa();
}