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
#define lp2(i, n) for (i = 0; i < n; i++)
#define prnt(a) cout << a
li getElement(vector<li>, int sz, li num)
{
}
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<li> arr1(n + 5);
        vector<li> arr2(n + 5);
        vector<li> ans1;
        vector<li> ans2;

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0, j = 0; i < n; i++)
        {
            while (arr1[i] > arr2[j])
                j++;
            ans1.push_back(arr2[j] - arr1[i]);
        }
        ans2.push_back(arr2[n - 1] - arr1[n - 1]);
        for (int i = n - 2, j = n - 1; i >= 0; i--)
        {
            // cout << "Entered" << endl;
            // cout << arr1[i] << " " << arr2[j] << endl;
            ;
            if (arr1[i + 1] > arr2[i])
            {
                j = i;
            }
            // cout << j << endl;
            ans2.push_back(arr2[j] - arr1[i]);
        }
        for (int i = 0; i < ans1.size(); i++)
        {
            cout << ans1[i] << " ";
        }
        cout << endl;
        for (int i = ans2.size() - 1; i >= 0; i--)
        {
            cout << ans2[i] << " ";
        }
        cout << endl;
    }
    baperBariJa();
}