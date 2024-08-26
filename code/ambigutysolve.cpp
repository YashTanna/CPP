#include<iostream>
#include<string>
using namespace std;

class Base1
{
    public:
    void display()
    {
        cout<<"Called from Base1 class\n";
    }
};

class Base2
{
    public:
    void display()
    {
        cout<<"Called from Base2 class\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
    void display()
    {
        cout<<"Called from Derived class \n";
        // Base1 ::display();
    }
};

int main()
{
    // Base1 b1;
    // b1.display();
    // Base2 b2;
    // b2.display();
    Derived d1;
    d1.Base1::display();
    d1.Base2::display();
    d1.display();
    return 0;
}