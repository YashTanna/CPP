#include<iostream>
#include<string>
using namespace std;

class space 
{
    int a,b,c;
    public:
    space(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void operator-()
    {
        a= -a;
        b = -b;
        c = -c;
    }
};

int main()
{
    space s(1,2,3);
    s.display();
    -s;
    s.display();
    -s;
    s.display();
    return 0;
}