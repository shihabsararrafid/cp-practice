#include <iostream>
using namespace std;
class Circle
{
private:
    int rad;
    float area;

public:
    void getData(int r)
    {
        rad = r;
    }
    void printArea()
    {
        area = (3.14) * rad * rad;
        cout << "Area is =" << area << endl;
    }
};
int main()
{
    Circle c;
    c.getData(5);
    c.printArea();
    return 0;
}