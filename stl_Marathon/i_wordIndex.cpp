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
map<string, ll> word;
// ll count;
void genString()
{
    ll count = 0;
    // count = 0;
    // for length 1 word
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        string s = "";
        s += ch;
        count++;
        word.insert({s, count});
    }
    // for length 2 word
    for (char ch1 = 'a'; ch1 <= 'y'; ch1++)
    {
        string s = "";
        s += ch1;
        for (char ch = ch1 + 1; ch <= 'z'; ch++)
        {

            s += ch;
            count++;
            word.insert({s, count});
            s.pop_back();
        }
    }
    // for length 3 word
    for (char ch1 = 'a'; ch1 <= 'x'; ch1++)
    {
        string s = "";
        s += ch1;
        for (char ch2 = ch1 + 1; ch2 <= 'y'; ch2++)
        {
            s += ch2;
            for (char ch = ch2 + 1; ch <= 'z'; ch++)
            {

                s += ch;
                count++;
                word.insert({s, count});
                s.pop_back();
            }
            s.pop_back();
        }
    }
    for (char ch3 = 'a'; ch3 <= 'w'; ch3++)
    {
        string s = "";
        s += ch3;
        for (char ch1 = ch3 + 1; ch1 <= 'x'; ch1++)
        {

            s += ch1;
            for (char ch2 = ch1 + 1; ch2 <= 'y'; ch2++)
            {
                s += ch2;
                for (char ch = ch2 + 1; ch <= 'z'; ch++)
                {

                    s += ch;
                    count++;
                    word.insert({s, count});
                    s.pop_back();
                }
                s.pop_back();
            }
            s.pop_back();
        }
    }
    for (char ch4 = 'a'; ch4 <= 'v'; ch4++)
    {
        string s = "";
        s += ch4;
        for (char ch3 = ch4 + 1; ch3 <= 'w'; ch3++)
        {

            s += ch3;
            for (char ch1 = ch3 + 1; ch1 <= 'x'; ch1++)
            {

                s += ch1;
                for (char ch2 = ch1 + 1; ch2 <= 'y'; ch2++)
                {
                    s += ch2;
                    for (char ch = ch2 + 1; ch <= 'z'; ch++)
                    {

                        s += ch;
                        count++;
                        word.insert({s, count});
                        s.pop_back();
                    }
                    s.pop_back();
                }
                s.pop_back();
            }
            s.pop_back();
        }
    }
   // cout << count << endl;
}

int main()
{
    genString();
    LetsGoCin();
    string str;
    // cout << count << endl;
    while (cin >> str)
    {
        cout << word[str] << endl;
    }
    baperBariJa();
}