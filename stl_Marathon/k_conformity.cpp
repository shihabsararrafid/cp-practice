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

    while (1)
    {
        int n;

        cin >> n;
        if (n == 0)
            return 0;
        map<vector<int>, int> courses;
        int ans = 0;
        //  cout << n << endl;
        while (n--)
        {
            vector<int> course(5);
            for (int i = 0; i < 5; i++)
            {
                cin >> course[i];
            }
            sort(course.begin(), course.end());
            courses[course]++;
            ans = max(ans, courses[course]);
        }
        int res = 0;
        for (auto const &it : courses)
        {
            if (ans == it.second)
                res += it.second;
            // cout << it.second << endl;
        }
        // cout << ans << endl;
        cout << res << endl;
    }

    baperBariJa();
}