#include <iostream>
#include <algorithm>
using namespace std;
int arr[10000];
int len = 0;
void menu()
{
    cout << "**********  MENU  ************" << endl;
    cout << " 1 . Create An Array " << endl;
    cout << " 2 . Linear Search " << endl;
    cout << " 3 . Binary Search " << endl;
    cout << " 4 . Display Array " << endl;
    cout << " 5 . Exit " << endl;

    cout << " Enter your option <1-5>  :  " << endl;
}
class Search
{

    int s;

public:
    void setSize(int len)
    {
        s = len;
    }
    int getSize()
    {
        return s;
    }
    void display(int *arr, int n)
    {
        cout << "The Array is :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
    void createAnArray()
    {
        int n;
        cout << "How many elements will the array contain " << endl;
        // s = n;
        cin >> n;
        len = n;
        cout << "Please input " << n << "element" << endl;
        for (int i = 0; i < n; i++)
        {
            int elem;
            cin >> elem;
            arr[i] = elem;
        }
    }
    int LinearSearch(int *arr, int n)
    {
        int num;
        cout << "Enter the element to be searched :" << endl;
        cin >> num;
        if (len == 0)
        {
            cout << "Create an array & then come to search . "
        }
        for (int i = 0; i < n; i++)
        {
            if (*(arr + i) == num)
            {
                cout << "Element found at index " << i << endl;
                return 0;
            }
        }
        cout << "\n\n"
             << endl;
        cout << "**************NOT FOUND**************** " << endl;
        cout << "\n\n"
             << endl;
    }
    int BinarySearch(int *arr, int n)
    {
        int num;
        cout << "Enter the element to be searched :" << endl;
        cin >> num;
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == num)
            {
                cout << "Element found at index " << mid << endl;
                return 0;
            }
            else if (num > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << "\n\n"
             << endl;
        cout << "**************NOT FOUND**************** " << endl;
        cout << "\n\n"
             << endl;

        // sort(arr, arr + n);
    }
};
int main()
{

    while (1)
    {
        menu();
        int act;

        cin >> act;
        if (act == 5)
        {
            cout << " Thanks " << endl;
            return 0;
        }
        else if (act > 5)
        {
            cout << "INVALID INPUT" << endl;
            return 0;
        }
        // return 0;
        Search s1;
        switch (act)
        {
        case 1:
            s1.createAnArray();
            cout << len << endl;
            /* code */
            break;
        case 2:
            s1.LinearSearch(arr, len);
            /* code */
            break;
        case 3:
        {
            // int len = s1.getSize();
            cout << len << endl;
            sort(arr, arr + len);
            s1.BinarySearch(arr, len);
            /* code */
            break;
        }

        case 4:
            s1.display(arr, len);
            /* code */
            break;

            // default:
            //  break;
        }
    }
}