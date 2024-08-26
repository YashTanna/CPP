#include<iostream>
using namespace std;

template <class D = int>
class complax
{
    D real;
    D img;
    public:
    complax(D a, D b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
};

main()
{
    complax <> c1(5.5,2.0),c2(4.0,3.0);
    c1.display();
    c2.display();
    return 0;
}