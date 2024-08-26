#include<iostream>
#include<string>
using namespace std;

class complax 
{
    int real;
    int img;
    public:
    void setdata()
    {
        cout<<"Enter real value of number\n";
        cin>>real;
        cout<<"Enter imaginary value of number \n";
        cin>>img;
    }
    void displaydata()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
    friend complax sum (complax c1,complax c2)
    {
        complax c;
        c.real= c1.real + c2.real;
        c.img = c1.img + c2.img;
        return c;
    }
};

int main()
{
    complax c1,c2,c3;

    c1.setdata();
    c1.displaydata();

    c2.setdata();
    c2.displaydata();

    c3 = sum(c1,c2);
    c3.displaydata(); 
    return 0;
}