#include<iostream>
#include<string>
using namespace std;

class area
{
    int a;
    int b;
    int c;
    float d;
    public:
    area(int x)
    {
        a=x;
        float ans;
        ans = 3.14 * a * a;
        cout<<"Area of a circle is "<<ans<<endl;
    }
    area(int x , int y)
    {
        a=x;
        b=y;
        float ans;
        ans = a*b;
        cout<<"Area of a rectangle is "<<ans<<endl;
    }
    area(int x , float y)
    {
        a=x;
        d=y;
        float ans;
        ans = 0.5*a*d;
        cout<<"Area of a Triangle is "<<ans<<endl;
    }
};

int main()
{
    area a(5,6.05f);
    return 0;
}