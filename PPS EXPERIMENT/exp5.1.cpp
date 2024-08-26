#include<iostream>
using namespace std;

class complax
{
    int real;
    int img;
    public:
    complax(){
        real = 1;
        img = 1;
    }
    complax(int a,int b)
    {
        real = a;
        img = b;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    int operator *(complax & c)
    {
        complax t;
        t.real = real * c.real;
        t.img = img * c.img;
        return (t.real + t.img);
    }
};

main()
{
    complax c1(5,7),c2(4,8);
    c1.display();
    c2.display();
    int total = c1 * c2;
    cout<<"Multiplication of both number is "<<total<<endl;
    return 0;
}