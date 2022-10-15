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
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> arr(3);
        for (int j = 0; j < 3; j++)
            cin >> arr[j];
        sort(arr.begin(), arr.end());
        ll mul = (arr[0] * arr[0]) + (arr[1] * arr[1]);
        mul = sqrt(mul);
        cout << "Case " << i << ": ";
        if(mul==arr[2])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
      //  cout << mul << endl;
    }
    baperBariJa();
}