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
ll n = 20 * 1e6;
vector<ll> Result;
vector<bool> is_Primes(n + 3, true);
vector<ll> Primes;
void sieve()
{
    for (int i = 4; i <= n; i += 2)
    {
        is_Primes[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (is_Primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_Primes[j] = false;
            }
        }
    }
    // for (int i = 2; i <= n; i++)
    // {
    //     if (is_Primes[i])
    //         cout << i << endl;
    // }
    for (int i = 2; i <= n; i++)
    {
        if (is_Primes[i])
            Primes.push_back(i);
    }
   // cout << Primes.size() << endl;
    for (ll i = 0; i < Primes.size(); i++)
    {
        for (ll j = i + 1; j < Primes.size(); j++)
        {
            if (Primes[i] * Primes[j] > n)
                break;
            Result.push_back(Primes[i] * Primes[j]);
        }
    }
    sort(Result.begin(), Result.end());
   // cout << Result.size() << endl;
}
// bool binartSearch(int num, int len)
// {
//     int low = 0;
//     int high = len - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (Primes[mid] == num)
//         {
//             return true;
//         }
//         else if (num > Primes[mid])
//         {
//             low = mid + 1;
//         }
//         else
//             high = mid - 1;
//     }
//     return false;
// }

int b[11000000];
void getDivisor()
{
    // vector<int>::iterator itr = Primes.begin();

    // cout << Result.size() << endl;
    // sort(Result.begin(), Result.end());
    // int primesDivisor = 0;
    // cout << n << endl;
    // //  vector<int> b(n + 3, 0);
    // //
    // //   vector<int>::iterator itr = Primes.begin();
    // // for (int j = 0; j < 100000; j++)
    // // {
    // //     cout << Primes[j] << endl;
    // //     int k = Primes[j];
    // //     // for (int i = 1; i <= n; i++)
    // //     // {
    // //     //     cout << i / k << endl;
    // //     //     // if (is_Primes[i / k])
    // //     //     // {
    // //     //     //     b[i]++;
    // //     //     // }
    // //     // }
    // // }
    // int j;
    //
    // for (; itr != Primes.end(); ++itr)
    // {
    //     int k = *itr;
    //     for (j = *itr; j < 11000000; j += k)
    //     {
    //         if (is_Primes[j / k])
    //             b[j]++;
    //         // if(a[j/(*itr)];
    //     }
    // }

    // int i;
    // for (i = 4; i < 11000000; i++)
    //     if (b[i] == 2)
    //     {
    //         cout << i << endl;
    //         Result.push_back(i);
    //         if (Result.size() == 2000000)
    //         {
    //             // cout<<"found"<<i<<endl;
    //             break;
    //         }
    //     }
    // for (ll i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    //     for (ll j = 1; j * j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             int div1 = j;
    //             int div2 = i / j;
    //             if (div1 == div2 && is_Primes[div1])
    //             {
    //                 primesDivisor++;
    //             }
    //             else if (is_Primes[div1])
    //                 primesDivisor++;
    //             else if (is_Primes[div2])
    //                 primesDivisor++;
    //         }
    //     }
    //     if (primesDivisor == 2)
    //     {
    //         cout << i << endl;
    //         Result.push_back(i);
    //     }
    // }
}
int main()
{
    LetsGoCin();
    sieve();
    getDivisor();
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        cout << Result[k - 1] << endl;
    }
    baperBariJa();
}