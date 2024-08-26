#include<iostream>
#include<string>
using namespace std;

class ABC;

class XYZ
{
    int a;
    int b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
    friend void sum(ABC & ,XYZ &);
};

class ABC
{
    int a;
    int b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }

    friend void sum(ABC & ,XYZ &);
    
};

void sum(ABC & a,XYZ & x)
{
    int sum = a.a + x.a;
    int sum2 = a.b + x.b;
    cout<<sum<<"+"<<sum2<<"i\n";
}


int main()
{
    ABC a1;
    a1.setdata(5,6);
    a1.display();

    XYZ x1;
    x1.setdata(7,8);
    x1.display();

    sum(a1,x1);
    return 0;
}