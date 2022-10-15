/// write a program to calculate the area of a triangle and perimeter of a triangle
#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
    float len1, len2, len3, perimeter;

public:
    void set(float l1, float l2, float l3);
    void get()
    {
        cout << "Len1 "
             << " "
             << len1 << endl
             << "Len2 "
             << "  " << len2 << endl
             << "Len 3"
             << "  " << len3 << endl;
        // cout << "Len2 "
        //      << " " << len2 << endl;
        // cout << "Len 3"
        //      << " " << len3 << endl;
    }
    float Perimeter()
    {
        perimeter = len1 + len2 + len3;
        return perimeter;
    }
    float Area()
    {
        float half_peri = perimeter / 2.0;
        // cout << half_peri << endl;
        float area = half_peri * (half_peri - len1) * (half_peri - len2) * (half_peri - len3);
        area = sqrt(area);
        if (area <= 0)
        {
            cout << "Please give valid length of triangle !!!!!!" << endl
                 << "Your triangle can be constructed" << endl;
            return 0;
        }

        return area;
    }
};
// Constructor
void Triangle::set(float l1, float l2, float l3)
{
    len1 = l1;
    len2 = l2;
    len3 = l3;
};
int main()
{
    Triangle t1;
    cout << "Enter the three end of a triangle:  " << endl;
    float a, b, c;
    cin >> a >> b >> c;
    t1.set(a, b, c);
    t1.get();
    cout << "Perimeter of the given triangle is " << t1.Perimeter() << endl;
    cout << "Area of the given triangle is " << t1.Area() << endl;
    Triangle t2;
    return 0;
}