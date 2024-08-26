#include<iostream>
#include<string>
using namespace std;
void pos_num(int );
void neg_num(int );
int main()
{
    cout<<"Enter 5 value\n";
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
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
        cout<<"Negative number\n";
    }
}