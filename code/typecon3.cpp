#include<iostream>
#include<string>
using namespace std;

class derived;
class base
{
    int code,item;
    float price;
    public:
    base()
    {
        code = 0;
        item = 0;
        price = 0.00;
    }
    base(int a,int b,float c)
    {
        code = a;
        item = b;
        price = c;
    }
    void display()
    {
        cout<<"Code = "<<code<<"\nitem = "<<item<<"\nPrice = "<<price<<endl;
    }
    operator derived();
};

class derived
{
    int code;
    float value;
    public:
    derived()
    {
        code = 0;
        value = 0.00;
    }
    derived(int a,float b)
    {
        code = a;
        value = b;
    }
    void display()
    {
        cout<<"Code = "<<code<<"\nValue = "<<value<<endl;
    }
};

base::operator derived()
{
    derived d1(code,item*price);
    return d1; 
}

int main()
{
    base b1(1,3,45);
    derived d1;
    d1 = b1;
    b1.display();
    d1.display();
    return 0;
}