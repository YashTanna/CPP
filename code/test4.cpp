
#include<iostream>
using namespace std;

inline int fact(int a)
{
    if(a==1)
        return 1;
    else 
        return a*fact(a-1);
}

inline  cube(int a)
{
    return a*a*a;
}

main()
{
    int a;
    cout<<"Enter number\n";
    cin>>a;

    cout<<"Factorial of number "<<a<<" is "<<fact(a)<<endl;
    cout<<"Cube of number "<<a<<" is "<<cube(a);
    return 0;
}