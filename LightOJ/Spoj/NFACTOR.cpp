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
ll n = 1e6;
vector<ll> Primes;
vector<ll> Numbers;
int arr[1000000] = {0};
void sieve()
{
    vector<bool> is_Primes(n + 1, true);
    Primes.push_back(2);
    for (ll i = 4; i < n; i += 2)
    {
        is_Primes[i] = false;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (is_Primes[i])
        {
            Primes.push_back(i);
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
    for (int i = 1; i <= 1000000; i++)
    {
        int cnt = 0;
        for (int j = 0; Primes[j] <= i && j < Primes.size(); j++)
        {
            if (i % Primes[j] == 0)
                cnt++;
        }
        arr[i] = cnt;
    }
    //  cout << Primes.size() << " " << arr[100] << endl;
}
int main()
{
    sieve();
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int cnt = 0;

        // for (int i = a; i <= b; i++)
        // {
        //     if (arr[i] == n)
        //         cnt++;
        // }
        cout << cnt << endl;
    }
    baperBariJa();
}