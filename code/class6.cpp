#include <iostream>
#include <string>
using namespace std;

class complax;

class calculator
{
public:
    int sumreal(complax, complax);
};

class complax
{
private:
    int real;
    int img;
    // friend int calculator :: sumreal(complax,complax);
    friend class calculator;

public:
    void setnumber(int a,int b)
    {
        real=a;
        img=b;
    }
    void displaydata()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
};

int calculator ::sumreal(complax o1,complax o2)
{
    return (o1.real + o2.real);
}

int main()
{
    complax o1,o2;
    o1.setnumber(5,6);
    o2.setnumber(4,8);
    calculator c1;
    int res = c1.sumreal(o1,o2);
    cout<<res<<endl;
    return 0;
}