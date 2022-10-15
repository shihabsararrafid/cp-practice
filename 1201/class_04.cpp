#include <iostream>
using namespace std;
// in static method there will be no non static elements
// non static method can hold static & non static data
class Today
{
private:
    int x;
    static int y;

public:
    Today()
    {
        cout << "Rafid vai is calling" << endl;
    }
    Today(int a)
    {
        x = a;
        cout << "x  =   " << x << endl;
    }
    void getData()
    {
        cout << x << " " << y << "\n";
    }
    void setData(int a, int b)
    {
        x = a;
        y++;
    }
};
int Today::y = 0;

int main()
{
    Today t;
    Today s(10);
    // Today t1;
    // Today t2;
    // t1.setData(10, 20);
    // t1.getData();
    // t2.setData(10, 20);
    // t2.getData();
    // // cout << y << endl;
    // return 0;
}




