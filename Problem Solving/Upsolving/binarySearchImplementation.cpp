#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
int binarySearch(li vec[], int n, li find)
{
    int low = 0, high = n - 1;
    //   int mid = low + (high - low) / 2;
    while (low <= high)
    {
        //  cout << low << high << endl;
        int mid = low + (high - low) / 2;
        if (vec[mid] == find)
        {
            return mid;
        }
        else if (find > vec[mid])
        {
            low = mid + 1;
        }
        else if (find < vec[mid])
            high = mid - 1;
    }
    return -1;
}
int main()
{
    LetsGoCin();
    int arr[8] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[8] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++)
    {
        
    }
    baperBariJa();
}