#include<iostream>
#include<string>
using namespace std;

class Base1
{
    protected:
    int base1int;
    public:
    void setbase1(int a)
    {
        base1int = a;
    }
};

class Base2
{
    protected:
    int base2int;
    public:
    void setbase2(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1 , public Base2
{
    public:
    void show()
    {
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of these values is "<<base1int + base2int<<endl;
    }
};

int main()
{
    Derived yash;
    yash.setbase1(25);
    yash.setbase2(36);
    yash.show();
    return 0;
}