#include<iostream>
#include<string>
using namespace std;

class test 
{
    int size;
    int * p;
    public:
    test(int s)
    {
        size=s;
        p = new int [s];
    }
    void input()
    {
        cout<<"Enter the value\n";
        for(int i=0;i<size;i++)
        {
            cin>>p[i];
        }
    }
    void output()
    {
        cout<<"The value entered by user is \n";
        for(int i=0;i<size;i++)
        {
            cout<<p[i]<<endl;
        }
    }
};

int main()
{
    cout<<"ENter the value of n\n";
    int n;
    cin>>n;
    test t1(n);
    t1.input();
    t1.output();
    return 0;
}