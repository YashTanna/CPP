#include <iostream>
#include <string>
using namespace std;

class complax
{
    int real, img;
    public:
    complax(void);    //This is a defult constructor 
    void printdata()
    {
        cout<<real<<" + "<<img<<"i\n";
    }
};

complax :: complax()
{
    real = 5;
    img = 10;
}

int main()
{
    complax c1;
    c1.printdata();
    return 0;
}