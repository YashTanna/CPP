#include<iostream>
#include<string>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter two number\n";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        else 
        {
            cout<<a<<"/"<<b<<" is "<<a/b;
        }
    }
    catch(float i)
    {
        cout<<"Excaption Caught: Divide by zero\n";
    }
    return 0;
}