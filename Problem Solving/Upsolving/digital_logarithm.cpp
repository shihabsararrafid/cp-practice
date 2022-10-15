#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
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
        string str[n + 5];
        string str2[n + 5];
        vector<int> Log1;
        vector<int> Log2;
        int freq1[11] = {0};
        int freq2[11] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> str2[i];
        }
        int cnt1 = 0, cnt2 = 0;
        vector<char> is_matched(n + 2, false);
        vector<char> is_matched_2(n + 2, false);
        char *p;
        for (int i = 0, j = 0; i < n, j < n; j++)
        {
            //  p = strstr(str[i], str[j]);
            if (!is_matched[i] && !is_matched_2[j] && str[i] == str2[j])
            {
                //  cout << str[i] << " " << str2[j] << endl;
                //  cout << i << " " << j << endl;
                is_matched[i] = true;
                is_matched_2[j] = true;
            }
            if (j == n - 1 && i == n - 1)
                break;
            if (j == n - 1)
            {
                i++;
                j = -1;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (is_matched[i])
        //     {
        //       //  cout << str[i] << endl;
        //         // cout << str2[i] << endl;
        //     }
        // }
        //   cout << "finished" << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     if (is_matched_2[i])
        //     {
        //        // cout << str2[i] << endl;
        //         // cout << str2[i] << endl;
        //     }
        // }
        //  cout << "finished" << endl;
        for (int i = 0; i < n; i++)
        {
            if (is_matched_2[i] == false)
            {
                if (str2[i].size() == 1)
                {
                    int num = str2[i][0] - '0';
                    //     if (num != 1)
                    //   cout << num << endl;
                    Log2.push_back(num);
                }
                else
                {
                    Log2.push_back(str2[i].size());
                    cnt2++;
                }
            }
        }
        //  cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (is_matched[i] == false)
            {
                if (str[i].size() == 1)
                {
                    // cout << str[i][0] << endl;
                    int num = str[i][0] - '0';
                    //  cout << num << endl;
                    //   if (num != 1)
                    Log1.push_back(num);
                }
                else
                {
                    //  cout << str[i] << endl;
                    Log1.push_back(str[i].size());
                    cnt1++;
                }
            }
        }
        int diff = 0;
        for (int i = 0; i < Log1.size(); i++)
        {

            //    cout << Log1[i] << endl;
            freq1[Log1[i]]++;

            //  cout << Log1[i] << " " << Log2[i] << endl;
        }
        for (int i = 0; i < Log1.size(); i++)
        {

            //    cout << Log1[i] << endl;
            // freq1[Log1[i]]++;

            freq2[Log2[i]]++;
            // cout << Log1[i] << " " << Log2[i] << endl;
        }
        // cout << cnt1 << " " << cnt2 << endl;
        for (int i = 2; i <= 9; i++)
        {
            //  cout << freq1[i] << " " << freq2[i] << endl;
            diff += max(freq1[i], freq2[i]) - min(freq1[i], freq2[i]);
        }
        int newww = '2' - '0';
        // cout << diff << endl;
        cout << diff + cnt1 + cnt2 << endl;
        //  cout << endl;
    }
    baperBariJa();
}