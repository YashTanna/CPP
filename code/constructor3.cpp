#include<iostream>
#include<string>
using namespace std;

class point 
{
    int x,y;
    public:
        point (int a,int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
};

int main()
{
    point p1(3,4);
    p1.display();
    point p2(3,6);
    p2.display();
    return 0;
}