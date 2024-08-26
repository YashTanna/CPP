#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two number\n";
    cin>>x>>y;
    try
    {
        if(y!= 0)
        {
            cout<<"Result of (x/y) is "<<(x/y)<<endl;
        }
        else 
        {
            throw y;
        }
    }
    catch(int a)
    {
        cout<<"Exaption caught: Divided by Zero\n";
    }
    return 0;
}