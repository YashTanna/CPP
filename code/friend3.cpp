#include<iostream>
#include<string>
using namespace std;


class data
{
    int data1;
    int data2;
    public:

    void setdata(int a,int b)
    {
        data1=a;
        data2=b;
    }

    friend void display(data &);
};

void display(data &);


void display(data & d1)
{
    cout<<d1.data1<<endl;
    cout<<d1.data2<<endl;
}

int main()
{
    data d1;
    d1.setdata(5,6);
    display(d1);
    return 0;
}