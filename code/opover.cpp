#include<iostream>
#include<string>
using namespace std;

class math
{
    int a,b,c,d;
    public:
    math(int x,int y,int z,int w)
    {
        a=x;
        b=y;
        c=z;
        d=w;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }
    void operator +()
    {
        a= -a;
        b=-b;
        c=-c;
        d=-d;
    }
};

int main()
{
    math m1(1,2,3,4);
    m1.display();
    +m1;
    m1.display();  
    return 0;
}
