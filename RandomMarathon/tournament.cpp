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
    int arr[n + 1] = {};
    vector<pair<int, int>> arr2;
    map<int, int> mp;
    vector<vector<int>> arr3(n * (n - 1) / 2, vector<int>(6));
    for (int i = 0; i < (n * (n - 1) / 2) - 1; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        //  cout << num1 << " " << num2 << endl;
        arr[num1]++;
        arr[num2]++;
        arr3[i][0] = num1;
        arr3[i][1] = num2;
    }
    for (int i = 1; i <= n; i++)
    {
        arr2.push_back(make_pair(arr[i], i));
    }
    sort(arr2.begin(), arr2.end());
    int ans1, ans2;
    vector<int> ans;
    for (int i = 0; i < 2; i++)
    {
        ans.push_back(arr2[i].second);
        // cout << arr2[i].first << " " << arr2[i].second << endl;
    }
    //  cout<<fixed<<setprecision(6)<<
    ans1 = ans[0];
    ans2 = ans[1];
    vector<int> loose;
    vector<int> loose1;
    // cout << ans1 << " " << ans2 << endl;
    for (int i = 0; i < (n * (n - 1) / 2) - 1; i++)
    {
        if (arr3[i][0] == ans1 || arr3[i][1] == ans1)
        {
            if (arr3[i][1] == ans1)
                loose.push_back(arr3[i][0]);
        }
    }
  //  for (int i = 0; i < loose.size(); i++)
        //cout << loose[i] << endl;
    int m = 0;
    vector<int>::iterator it;
    for (int i = 0; i < (n * (n - 1) / 2) - 1; i++)
    {
        if (arr3[i][0] == ans2 || arr3[i][1] == ans2)
        {
            if (arr3[i][1] == ans2)
                loose1.push_back(arr3[i][0]);
            //  cout << arr3[i][0] << endl;
            // if (arr3[i][1] == ans2 && find(loose.begin(), loose.end(), arr3[i][0]) != loose.end())
            //     m++;
        }
    }
    if (loose1.size() > loose.size())
    {
        cout << ans1 << " " << ans2 << endl;
    }
    else
    {
        cout << ans2 << " " << ans1 << endl;
    }
    // cout << ans[0] << " " << ans[1] << endl;
    // map<int, int>::iterator itr;
    // int last =
    // for (auto const &kv : mp)
    //  cout << kv.first << " " << kv.second << endl;
    baperBariJa();
}