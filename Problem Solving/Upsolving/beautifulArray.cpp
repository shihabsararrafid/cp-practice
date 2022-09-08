#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define letsgocin                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
int main()
{
    letsgocin;
    int t;
    cin >> t;
    while (t--)
    {
        ull n, k, b, s;
        cin >> n >> k >> b >> s;
        // ull mul = k * b;
        ull diff = (s - (k * b));
        diff /= k;
        ull anotherSum = (k * b) + ((k - 1) * (n -0));
        // ull rem = diff / k;
        // cout << k * b << " s" << s << endl;
        if ((k * b) > s || s > anotherSum)
        {
            cout << -1 << endl;
        }
        else
        {
            ull num1 = min(k * b + k - 1, s);
            ull reminder = s - num1;
            cout << num1 << " ";
            for (int i = 1; i <= n - 1; i++)
            {
                ull num = min(reminder, k - 1);
                reminder -= num;
                cout << num << " ";
            }
            cout << endl;
            // cout << "rem" << reminder << endl;
        }
        // cout << diff << endl;
    }
    return 0;
}