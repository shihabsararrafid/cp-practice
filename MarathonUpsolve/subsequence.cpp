#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
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
        // int n;
        // cin >> n;
        string str;
        cin >> str;
        int len = str.size();
        int zero = 0;
        int one = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '0')
                zero++;
            else
                one++;
        }

        int for1 = 0, for0 = 0;
        int res = 1e7;
        for (int i = 0; i < len; i++)
        {
            // making 000000000**********1
            if (str[i] == '0')
            {
                for0++;
                zero--;
            }
            else
            {
                for1++;
                one--;
            }
            res = min(res, min(for1 + zero, for0 + one));
        }
        cout << res << endl;
        // if (len == 3 && (str != "101" || str != "010"))
        // {
        //     cout << 0 << endl;
        // }
        // else
        // {
        //     //vector<int> zero;
        //     int zero = 0;
        //     int one = 0;
        //   //  vector<int> one;
        //     map<int, int> ind;
        //     for (int i = 0; i < len; i++)
        //     {
        //         int x = 0;
        //         while (str[i] == '0')
        //         {
        //             x++;
        //             i++;
        //         }
        //         // i--;
        //         if (x != 0)
        //             zero.push_back(x);

        //         // else one.push_back(i);
        //     }
        //     for (int i = 0; i < len; i++)
        //     {
        //         int x = 0;
        //         int j = i;
        //         while (str[i] == '1')
        //         {
        //             x++;
        //             i++;
        //         }
        //         // i--;
        //         if (x != 0)
        //         {
        //             //  cout << "x" << x << endl;
        //             ind.insert({j, i - 1});
        //             one.push_back(x);
        //         }

        //         // else one.push_back(i);
        //     }
        //     //  cout << "s" << one.size() << endl;
        //     int sum1 = 0;
        //     for (int i = 0; i < one.size(); i++)
        //     {
        //         // cout << one[i] << " ";
        //     }
        //     //  cout << endl;
        //     // for (int i = 0; i < zero.size(); i++)
        //     // cout << zero[i] << " ";
        //     //  cout << endl;
        //     for (int i = 0; i < one.size(); i++)
        //     {
        //         sum1 += one[i];
        //         //  cout << sum1 << endl;
        //         // if (one[i] == 0)
        //         //     sum1--;
        //     }
        //     //   cout << "sum1 " << sum1 << endl;
        //     int sum2 = 0;
        //     for (int i = 0; i < zero.size(); i++)
        //     {
        //         sum2 += zero[i];
        //         // if (zero[i] == 0)
        //         //     sum2--;
        //     }
        //     int ded = 0;
        //     int diff1 = 0, diff2 = 0;
        //     for (const auto &kv : ind)
        //     {
        //         if (kv.first == 0 || kv.second == len - 1)
        //         {

        //             int diff = kv.second - kv.first;
        //             if (kv.first != 0)
        //             {
        //                 diff++;
        //             }
        //             if (kv.first == kv.second)
        //                 diff++;
        //             // cout << diff << endl;
        //             ded = max(ded, diff);
        //         }
        //         if (kv.first == 0)
        //         {
        //             diff1 = kv.second - kv.first;
        //             if (kv.first == kv.second)
        //                 diff1++;
        //         }

        //         if (kv.second == len - 1)
        //         {
        //             diff2 = kv.second - kv.first + 1;
        //         }
        //         //  cout << kv.first << " " << kv.second << endl;
        //     }
        //     ded = max(diff1, diff2);
        //     sum1 -= ded;
        //     // cout << "ded"
        //     //      << " " << ded << endl;
        //     //  cout << sum2 << endl;
        //     //  sum2 += min((zero[0] - 0), (len - zero[zero.size() - 1]));
        //     // cout << sum2 << endl;
        //     cout << min(sum1, sum2) << endl;
        // }
    }
    // 010 101
    //    110
    //  110011011110100111
    //  10111101000010100
    //  001111
    //  0
    //  00
    //  0111000
    //  1010111011110011011
    //  11100100011101101
    //  010100000111
    //  1111101
    //  000101100101111100
    //  01001101000
    //  0110
    baperBariJa();
}