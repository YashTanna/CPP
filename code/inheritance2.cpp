#include<iostream>
#include<string>
using namespace std;

class Base
{
    int data1;
    public:
    int data2;
    void getdata()
    {
        data1 = 10;
        data2 = 20;
    }
    
    void display()
    {
        cout<<data1<<endl<<data2<<endl;
    }
};

class dev : public Base
{
    public:
    int data3;
    void put()
    {
        cout<<data3;
    }
};

int main()
{
    dev d1;
    return 0;
}