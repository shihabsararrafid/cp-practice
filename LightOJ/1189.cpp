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
map<ll, ll> factors;
vector<ll> factorial;
vector<ll> factnum;
void findFactors(ll n)
{
    factors.insert({0, 1});
    factorial.push_back(1);
    factorial.push_back(1);
    factnum.push_back(0);
    factnum.push_back(1);
    factors.insert({1, 1});
    ll fact = 1;
    ll i = 2;
    while (fact <= n)
    {
        fact = fact * i;
        factnum.push_back(i);
        factorial.push_back(fact);
        // factors.insert({i, fact});
        i++;
    }
}
bool binarySearch(ll num, ll len)
{
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (factnum[mid] == num)
        {
            return true;
        }
        else if (factnum[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}
vector<ll> vecSum;
int main()
{
    LetsGoCin();
    findFactors(1e18);
    for (int i = 0; i < factnum.size(); i++)
    {
        // cout << factnum[i] << " " << factorial[i] << endl;
    }
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        vector<ll> ans;
        cout << "Case " << i << ": ";
        ll n;
        cin >> n;
        for (int j = factnum.size() - 1; j >= 0; j--)
        {
            if (factorial[j] <= n)
            {
               // cout << factorial[j] << " " << factnum[j] << endl;
                ans.push_back(factnum[j]);
                n -= factorial[j];
            }
        }
        if (n == 0)
        {
            for (int j = ans.size() - 1; j > 0; j--)
            {
                cout << ans[j] << "!+";
            }
            cout << ans[0] << "!" << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
        // if (binarySearch(n, factnum.size()))
        // {
        //     cout << "Found" << endl;
        // }
        // else if (binarySearch(n + 1, factnum.size()))
        // {
        //     cout << "Found +1" << endl;
        // }
        // else
        // {
        //     cout << "Not found" << endl;
        // }
    }
    baperBariJa();
}