#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <stack>
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
        int val;
        cin >> val;
        if (val == 0)
            return 0;
        while (1)
        {

            int tmp;
            cin >> tmp;
         //   cout << "tmp 1 " << tmp << endl;
            if (tmp == 0)
            {
             //   cout << "frdfd" << endl;
                cout << "\n";

                break;
            }
           // cout << "dssfsfs" << endl;
            stack<int> train;
            int strt = 1;
            train.push(strt);
            while (train.top() != tmp)
            {
                strt++;
                train.push(strt);
            }
            train.pop();
            for (int i = 1; i < val; i++)
            {
                int tmp1;
                cin >> tmp1;
             //   cout << tmp1 << " ";
                while (train.top() != tmp1)
                {
                    if (strt < val)
                    {
                        strt++;
                        train.push(strt);
                    }
                    else
                        break;
                }
                if (train.top() == tmp1)
                    train.pop();
            }
           // cout << endl;
            if (train.empty())
                cout << "Yes"
                     << "\n";
            // printf("Yes\n");
            else
                cout << "No"
                     << "\n";
            // printf("No\n");
        }
    }
    baperBariJa();
}