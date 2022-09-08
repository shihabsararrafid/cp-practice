#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
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

int getMin(string time)
{
    int min = (((time[0] - '0') * 10) + (time[1] - '0'));
    return min;
};
int getHour(string time)
{
    int hour = ((time[0] - '0') * 10 + (time[1] - '0'));
    return hour;
};
int getTime(string time, string time1)
{
    int hour = getHour(time);
    int min = getMin(time1);
    int total = (hour * 60) + min;
    return total;
}
int main()
{
    LetsGoCin();
    string time;
    string time2;
    // char c;
    int h, d, c, n;

    cin >> time;
    // cin >> c;
    cin >> time2;
    cin >> h >> d >> c >> n;
    // cout << time << endl;
    // cout << time2 << " ";
    //  cout << c << " ";
    float div = (float)h / (float)n;
    // cout << div << endl;
    div = ceil(div);
    // cout << div << endl;
    int totalTime = getTime(time, time2);
    int totalTime1 = getTime("20", "00");
    float res1 = div * c;
    if (totalTime - totalTime1 >= 0)
    {
        printf("%.4f\n", res1 * .8);
    }
    else if (totalTime == 0)
    {
        printf("%.4f\n", res1);
    }
    else
    {

        int diff = totalTime1 - totalTime;
        h += (d * diff);
        float div1 = (float)h / (float)n;
        div1 = ceil(div1);
        // cout << div << endl;
        float res2 = div1 * c * .8;
        if (res2 < res1)
        {
            printf("%.4f\n", res2);
        }
        else
        {
            printf("%.4f\n", res1);
        }
    }
    // cout << totalTime << " " << totalTime1;
    baperBariJa();
}