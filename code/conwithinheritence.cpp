#include<iostream>
#include<string>
using namespace std;

class Base1
{
    protected:
    int a1,a2;
    public:
    void display()
    {
        cout<<a1<<endl<<a2<<endl;
    }
    Base1(int x,int y)
    {
        a1=x;
        a2=y;
        cout<<"Constructor in Base1 class\n";
        display();
    }
};

class Base2
{
    protected:
    int b1,b2;
    public:
    void display()
    {
        cout<<b1<<endl<<b2<<endl;
    }
    Base2(int x,int y)
    {
        b1=x;
        b2=y;
        cout<<"Constructor in Base2 class\n";
        display();
    }
};

class Derived : public Base1 , public Base2
{
    protected:
    int c1,c2;
    public:
    void display()
    {
        cout<<c1<<endl<<c2<<endl;
    }
    Derived(int a,int b,int c,int d,int e,int f):Base1(a,b),Base2(c,d),c1(e),c2(f)
    {
        cout<<"Constructor in Derived class \n";
        display();
    }

};

int main()
{
    Derived d1(1,2,3,4,5,6);
    return 0;
}