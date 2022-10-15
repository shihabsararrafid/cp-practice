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
int len(li num)
{
    int len = 0;
    while (num > 0)
    {
        len++;
        num /= 10;
    }
    return len;
}
int main()
{
    LetsGoCin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        li num;
        // vector<li> arr1(n + 5);
        li arr1[n + 5];
        li arr2[n + 5];
        // vector<li> arr2(n + 5);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
         sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            int p = lower_bound(arr2, arr2 + n, arr1[i]) - arr2;
            // if (p != n && arr2[p] == arr1[i])
            //     cout << arr2[p] << " " << arr1[i] << " " << p << endl;
            if (p != n && arr1[i] == arr2[p])
            {
                arr1[i] = 0;
                arr2[p] = 0;
            }
            // sort(arr2, arr2 + n);
            // int index = binarySearch(arr2, n, arr1[i]);
            // // cout << index << endl;
            // if (index != -1)
            // {
            //     //  cout << index << endl;
            //     arr1[i] = 0;
            //     arr2[index] = 0;
            // }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr1[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
        li res = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > 9)
            {
                arr1[i] = len(arr1[i]);
                res++;
            }
            if (arr2[i] > 9)
            {
                arr2[i] = len(arr2[i]);
                res++;
            }
        }
        // cout << res << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr1[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
        sort(arr2, arr2 + n);
         sort(arr1, arr1 + n);

        for (int i = 0; i < n; i++)
        {
            int p = lower_bound(arr2, arr2 + n, arr1[i]) - arr2;
            // if (p != n && arr2[p] == arr1[i])
            //     cout << arr2[p] << " " << arr1[i] << " " << p << endl;
            if (p != n && arr1[i] == arr2[p] && arr1[i] != 0)
            {
                arr1[i] = 0;
                arr2[p] = 0;
            }
            // sort(arr2, arr2 + n);
            // int index = binarySearch(arr2, n, arr1[i]);
            // //   cout << arr1[i] << " ";
            // // cout << index << endl;
            // if (index != -1)
            // {
            //     //  cout << index << endl;
            //     arr1[i] = 0;
            //     arr2[index] = 0;
            // }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr1[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != 1 && arr1[i])
            {
                res++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] != 1 && arr2[i])
            {
                res++;
            }
        }
        cout << res << endl;
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr1[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr2[i] << " ";
        // }
        // cout << endl;
    }
    baperBariJa();
}