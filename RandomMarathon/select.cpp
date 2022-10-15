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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> mp;
        vector<ll> arr(n + 1);
        vector<ll> arr1;
        vector<pair<ll, ll>> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for (auto const &kv : mp)
        {
            // cout << kv.first << " " << kv.second << endl;
            arr1.push_back(kv.first);
            vec.push_back(make_pair(kv.second, kv.first));
        }
        sort(vec.begin(), vec.end());
        // for (int i = 0; i < vec.size(); i++)
        //     cout << vec[i].first << " " << vec[i].second << endl;
        if (vec[vec.size() - 1].first >= 3)
            cout << 0 << endl;
        else
        {
            sort(arr1.begin(), arr1.end());
            if (vec[vec.size() - 1].first == 2)
            {
                // vector<int>::iterator it;
                ll first = vec[vec.size() - 1].second;
                //  auto second = upper_bound(arr1.begin(), arr1.end(), first);

                if (arr1[0] == first)
                {
                    cout << abs(arr1[1] - first) << endl;
                }
                else if (arr1[arr1.size() - 1] == first)
                {
                    cout << abs(arr1[arr1.size() - 2] - first) << endl;
                }
                else
                {
                    auto it = std::find(arr1.begin(), arr1.end(), first);
                    ll index = it - arr1.begin();
                    //  cout << index << endl;
                    cout << min(abs(arr1[index + 1] - first), abs(arr1[index - 1] - first)) << endl;
                }
            }
            else
            {
                ll res = 1e18;
                for (int i = 0; i < arr1.size() - 2; i++)
                {
                   // cout << abs(arr1[i] - arr1[i + 1]) << " " << arr1[i + 1] << " " << //abs(arr[i + 1] - arr[i + 2]) << endl;
                    res = min(res, abs(abs(arr1[i] - arr1[i + 1]) + abs(arr1[i + 1] - arr1[i + 2])));
                }
                cout << res << endl;
            }
        }
    }
    baperBariJa();
}