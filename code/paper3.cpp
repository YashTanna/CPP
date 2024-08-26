#include<iostream>
#include<string>
using namespace std;

void pos_num(int );
void neg_num(int );

main()
{
    int a[5];
    cout<<"Enter 5 number \n";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
        pos_num(a[i]);
        neg_num(a[i]);
    }
    return 0;
}

void pos_num(int a)
{
    if(a>0)
    {
        cout<<"Positive number\n";
    }
}

void neg_num(int a)
{
    if(a<0)
    {
        cout<<"Negetive number\n";
    }
}