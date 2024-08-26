#include<iostream>
#include<string>
using namespace std;

class complax
{
    int real;
    int img;
    public:
    complax(){
        // cout<<"Executing defult constructor\n";
    }
    complax(int a,int b)
    {
        real=a;
        img = b;
    }
    // ~complax()
    // {
    //     cout<<"Executing disconstructor\n";
    // }
    void display()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
    complax operator +(complax c)
    {
        complax temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    int  operator *(complax c)
    {
        complax temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return (temp.real + temp.img);
    }
};

int main()
{
    complax c1(3,5),c2(2,6);
    c1.display();
    c2.display();
    complax c3;
    c3 = c1 + c2;
    c3.display();
    cout<<"Multiplication of complax nummber is "<<c1*c2<<endl;
    return 0;
}