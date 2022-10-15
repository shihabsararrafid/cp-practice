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
bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
}
int main()
{
    LetsGoCin();
    int n;
    cin >> n;
    // multimap<ll, ll> order;
    vector<pair<ll, ll>> order;
    while (n--)
    {
        ll n1, n2;
        cin >> n1 >> n2;
        order.push_back(make_pair(n2, n1));
    }
    sort(order.begin(), order.end(), [](const auto &a, const auto &b)
         { return a.first < b.first; });
    // for (auto i = order.rbegin(); i != order.rend(); i++)
    //     cout
    //         << i->second << " " << i->first << endl;
    for (int i = order.size() - 1; i >= 0; i--)
        cout << order[i].second << " " << order[i].first << endl;
    baperBariJa();
}