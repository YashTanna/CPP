#include <iostream>
using namespace std;

class sum
{
    int a, b, c;

public:
    sum()
    {
        a=b=c=0;
    }
    sum(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "a = " << a << "\nb = " << b << "\nc = " << c << endl;
    }
    sum operator+(int x)
    {
        sum temp;
        temp.a = a + x;
        temp.b = b + x;
        temp.c = c + x;
        return temp;
    }
};

main()
{
    sum s1(5,6,7);
    sum s2;
    s1.display();
    s2 = s1 + 5;
    s2.display();
    return 0;
}