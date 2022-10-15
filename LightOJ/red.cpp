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
        vector<int> arr1(n);
        vector<int> ind1;
        // vector<int>arr2()
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] >= 0)
                ind1.push_back(i);
        }
        int m;
        cin >> m;
        vector<int> arr2(m);
        vector<int> ind2;
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            if (arr2[i] >= 0)
                ind2.push_back(i);
        }
        int sum = 0;
        vector<int> sum1;
        vector<int> sum2;
        int sm1 = 0;
        //  sum1.push_back(0);
        if (ind1.size() != 0)
        {
            for (int i = 0; i <= ind1[ind1.size() - 1]; i++)
            {
                sm1 += arr1[i];
                sum1.push_back(sm1);
            }
            sort(sum1.begin(), sum1.end(), greater<int>());
        }

        // else if (ind1.size() == 0)
        //     sum1[0] = 0;
        int sm2 = 0;
        if (ind2.size() != 0)
        {
            for (int i = 0; i <= ind2[ind2.size() - 1]; i++)
            {

                sm2 += arr2[i];
                //   cout << sm2 << " ";
                sum2.push_back(sm2);
            }
            sort(sum2.begin(), sum2.end(), greater<int>());
        }

        //  sum2.push_back(0);

        // auto itr = sum2.begin();
        int l;
        int k;
        if (ind2.size() == 0)
            sum2.push_back(0);

        if (ind1.size() == 0)
            sum1.push_back(0);

        // auto itr1 = sum1.begin();
        //  cout << sum1[0] << endl;
        int mininini = min(sum1[0], sum2[0]);
        int maxim = max(sum1[0], sum2[0]);
        if (mininini < 0)
        {
            int res = maxim < 0 ? 0 : maxim;
            cout << res << endl;
        }
        else
            cout
                << sum1[0] + sum2[0] << endl;

        /* code */
    }

    baperBariJa();
}