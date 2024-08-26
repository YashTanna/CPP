#include<iostream>
#include<string>
using namespace std;

class Y;

class X
{
    int data;
    public:
        void setvalue(int value)
        {
            data=value;
        }
    friend void add(X,Y);
};

class Y
{
    int data;
    public:
        void setvalue(int value)
        {
            data=value;
        }
    friend void add(X,Y);
};

void add(X x,Y y)
{
    cout<<"Sum is "<<x.data + y.data;
}

int main()
{
    X x;
    x.setvalue(5);
    Y y;
    y.setvalue(6);

    add(x,y);
    return 0;
}