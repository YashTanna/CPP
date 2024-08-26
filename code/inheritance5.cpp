#include<iostream>
#include<string>
using namespace std;

class base1
{
    int i;
    public:
    void input(int a)
    {
        i=a;
    }
    void output()
    {
        cout<<i<<endl;
    }
};

class base2 
{
    int j;
    public:
    void input(int a=6)
    {
        j=a;
    }
    void output()
    {
        cout<<j<<endl;
    }
};

class derived : public base2 , public base1
{
    int k;
    public:
    void input(int a)
    {
        k=a;
    }
    // void output()
    // {
    //     cout<<k<<endl;
    // }
};

int main()
{
    derived d1;
    d1.input(5);
    d1.base2::input(6);
    d1.base1::input(7);
    d1.base1::output();
    return 0;
}