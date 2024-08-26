#include<iostream>
#include<string>
using namespace std;

class y;

class x
{
    int a;
    friend void swap(x &,y &);
    public:

    void setdata(int value)
    {
        a=value;
    }

    void displaydata()
    {
        cout<<a;
    }
};

class y
{
    int b;
    friend void swap(x &,y &);

    public:

    void setdata(int value)
    {
        b=value;
    }
    void displaydata()
    {
        cout<<b;
    }
};

void swap(x & x1,y & y1)
{
    int temp=x1.a;
    x1.a=y1.b;
    y1.b=temp;
}


int main()
{
    x x1;
    x1.setdata(66);
    y y1;
    y1.setdata(33);

    cout<<"Value of x before swaping \n";
    x1.displaydata();

    cout<<"Value of y before swaping \n";
    y1.displaydata();

    swap(x1,y1);

    cout<<"Value of x After swaping \n";
    x1.displaydata();

    cout<<"Value of y After swaping \n";
    y1.displaydata();

    return 0;
}