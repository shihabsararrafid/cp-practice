#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
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
vector<ll> Primes;
// ll n = 1e8 + 1;
// vector<bool> is_Primes(n, true);

// void sieve()
// {

//     for (ll i = 4; i <= n; i += 2)
//     {
//         is_Primes[i] = false;
//     }
//     for (ll i = 3; i * i <= n; i++)
//     {
//         if (is_Primes[i])
//         {
//             Primes.push_back(i);
//             // if (!checkDivisibility(i))
//             //   Primes.push_back(i);
//             for (ll j = i * i; j <= n; j += i)
//             {
//                 is_Primes[j] = false;
//             }
//         }
//     }
//     for (ll i = sqrt(n); i <= n; i++)
//     {
//         if (is_Primes[i])
//         {
//             Primes.push_back(i);
//         }
//     }
// }
void sieve()
{
    vector<bool> is_Primes(1e9 + 1, true);
    ll n = 1e8;
    //  Primes.push_back(2);
    for (ll i = 4; i <= n; i += 2)
    {
        is_Primes[i] = false;
    }
    for (ll i = 3; i * i <= n; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
            // if (!checkDivisibility(i))
            //   Primes.push_back(i);
            for (ll j = i * i; j <= n; j += i)
            {
                is_Primes[j] = false;
            }
        }
    }
    for (ll i = sqrt(n); i <= n; i++)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
        }
    }
    //     for (int i = 0; i < 100; i++)
    //     {
    //         cout << Primes[i] << endl;
    //     }
};
vector<ll> Desired;
// void getDesired(ll l, ll r)
// {
//     for (ll i = 0; Primes[i] <= r; i++)
//     {
//         if (Primes[i] >= l)
//             Desired.push_back(Primes[i]);
//     }
// }
int getLen(ll num)
{
    int len = 0;
    while (num > 0)
    {
        num /= 10;
        len++;
    }
    return len;
}
ll getSum(ll s, ll b)
{
    int len = getLen(s);
    // cout << len << endl;
    int mul = (int)(pow(10, len) + 1e-9);
    // cout << mul << endl;
    ll sum = 0 * mul + s;
    int i = 1;
    while (sum % b != 0)
    {
        sum = (i * mul) + s;
        //  cout << sum << endl;
        i++;
    }
    return sum;
}

int main()
{
    sieve();
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        ll sum = 0;

        ll l, r;
        //  getDesired(l, r);

        // cin >> l >> r;
        // ll ptr = lower_bound(Primes.begin(), Primes.end(), l) - Primes.begin();
        // for (int i = ptr; Primes[i] < r; i++)
        // {
        //     sum += getSum(Primes[i], Primes[i + 1]);
        //     // cout << getSum(Primes[i], Primes[i+1]) << " " << Primes[0] << endl;
        // }
        cout << sum << endl;
    }
}
