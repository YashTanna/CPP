#include <iostream>
#include <string>
using namespace std;

class complax
{
    int real, img;
    public:
    complax(int , int );    //This is a defult constructor 
    void printdata()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
};

complax :: complax(int a,int b)
{
    real = a;
    img = b;
}

int main()
{
    // Implicit call of constructor
    complax c1(5,6);
    c1.printdata();

    // Explicit call of constructor
    complax b = complax(8,9);
    b.printdata();

    return 0;
}