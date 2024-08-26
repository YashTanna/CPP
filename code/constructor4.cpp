#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class pin;

class point 
{
    int x,y;
    public:
    point (int a,int b)
    {
        x=a;
        y=b;
    }
    friend float finddis(point ,pin);
};

class pin 
{
    int x,y;
    public:
    pin (int a,int b)
    {
        x=a;
        y=b;
    }
    friend float finddis(point ,pin);
};

float  finddis(point p1,pin p2)
    {
        float p,q;
        p=pow((p2.x-p1.x),2);
        q=pow((p2.y-p1.y),2);
        float res = (pow((p+q),0.5));
        return res;
    }

int main()
{
    point p1(3,4);
    pin p2(5,6);
    // point p3(0,0);
    cout<<"Distance between two point is "<<finddis(p1,p2)<<endl;

    return 0;
}