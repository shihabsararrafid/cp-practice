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
string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int dates[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool checkLeapYear(int n)
{
    if (n % 4 == 0)
    {
        if (n % 100 == 0 && n % 400 == 0)
            return true;
        else if (n % 100 != 0)
            return true;
        else
            return false;
    }
    return false;
}
int matchMonths(string str)
{
    for (int i = 0; i < 12; i++)
    {
        if (str == months[i])
            return i;
    }
}
int main()
{
    LetsGoCin();

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        string str1;
        int date1, year1, date2, year2;
        string str2;
        char c1, c2;
        cin >> str1 >> date1 >> c1 >> year1;
        cin >> str2 >> date2 >> c2 >> year2;
        if (year1 == year2)
        {
            if (!checkLeapYear(year1))
                cout << 0 << endl;
            else
            {
                if (matchMonths(str1) < matchMonths(str2) && matchMonths(str1) <= 1)
                {
                    if ((matchMonths(str1) == 1) && date1 <= 29)
                    {
                        cout << 1 << endl;
                    }
                    else if (matchMonths(str1) == 0 && matchMonths(str2) == 1 && date2 == 29)
                    {
                        cout << 1 << endl;
                    }
                    else if (matchMonths(str1) == 0 && matchMonths(str2) > 1)
                    {
                        cout << 1 << endl;
                    }
                    // else if(matchMonths)
                    else
                        //  if (matchMonths(str1) != 1)
                        cout << 0 << endl;
                    // else if(matchMonths(str1)==1&&dat)
                }
                else if (matchMonths(str1) == matchMonths(str2) && matchMonths(str1) == 1)
                {
                    if (date1 <= 29 && date2 == 29)
                        cout << 1 << endl;
                    else
                        cout << 0 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
                //  cout << matchMonths(str2) << endl;
            }

            // cout << str1 << " " << months[0] << endl;
        }
        else
        {
            int cnt = 0;
            int mn = year1;
            for (ll i = year1; i <= year2; i++)
            {
                if (checkLeapYear(i))
                {
                    mn = year1;
                    break;
                }
            }
            ll diff = ((year2 - 1) / 4) - (mn / 4);
            // cout << diff << endl;
            // if (year2 % 4 == 0)
            //     diff++;
            // if (mn % 4 == 0 && mn != year1)
            //     diff++;
            ll div100 = ((year2 - 1) / 100) - (mn / 100);
            //  cout << div100 << endl;
            // if (year2 % 100 == 0)
            // {
            //     div100++;
            // }
            ll div400 = ((year2 - 1) / 400) - (mn / 400);
            //  cout << div400 << endl;
            // if (year2 % 400 == 0)
            //     div400++;
            // if (mn % 400 == 0)
            //     div400++;
            ll leapYear = (diff - div100 + div400);
            //    cout << leapYear << endl;
            //  cout << "diff " << diff << " div100 " << div100 << " "
            //     << " div400 " << div400 << endl;
            // for (ll i = mn + 4; i < year2; i += 4)
            // {
            //     if (checkLeapYear(i))
            //     {
            //         cnt++;
            //     }
            // }
            // if (checkLeapYear(2004))
            // cout << "year" << endl;
            // cout << cnt << endl;
            // cout << "previosLeap  " << leapYear << " ";
            if (checkLeapYear(year1) && matchMonths(str1) <= 1)
                leapYear++;
            if ((checkLeapYear(year2) && matchMonths(str2) >= 1))
            {
                if (matchMonths(str2) == 1 && date2 == 29)
                    leapYear++;
                else if (matchMonths(str2) == 1 && date2 != 29)
                    leapYear += 0;
                else
                    leapYear++;
            }

            //  cout << leapYear << " " << matchMonths(str2) << " " << ////matchMonths(str1) << endl;
            cout << leapYear << endl;
        }
        // cout << str1 << " " << date1 << " " << year1 << endl;
        // cout << str2 << " " << date2 << " " << year2 << endl;
    }
    baperBariJa();
}