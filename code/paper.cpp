#include<iostream>
using namespace std;

int  area(int a,int b,int c)
{
    return (a+b+c);
}
int  area(int a)
{
    return (4*a);
}
int  area(int a,int b)
{
    return (2*(a+b));
}
int  area(float a)
{
    return (2*a*3.14);   
}

int main()
{
    int a,b,c;
    float x;
    cout<<"Enter the side of triangle \n";
    cin>>a>>b>>c;
    cout<<"Perimeter of triangle is "<<area(a,b,c)<<endl;
    cout<<"Enter side of squrea\n";
    cin>>a;
    cout<<"Area of squre is "<<area(a)<<endl;
    cout<<"Enter sides of rectangle \n";
    cin>>a>>b;
    cout<<"Perimeter of squre is "<<area(a,b)<<endl;
    cout<<"Enter radius of circul \n";
    cin>>x;
    cout<<"Perimeter of circul is "<<area(x)<<endl;
    return 0;
}