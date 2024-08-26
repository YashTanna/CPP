#include <iostream>
using namespace std;

class name
{
    int x, y, z;

public:
    name(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y << " z = " << z << endl;
    }
    void operator+()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

main()
{
    name n1(2,3,4);
    n1.display();
    +n1;
    n1.display();
    return 0;
}