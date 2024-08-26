#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class sum
{
    int a[5];
    public:
    sum()
    {
        cout<<"Enter 5 value\n";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }
    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<"\t";
        }
    }
    operator double()
    {
        double sum =0;
        for(int i=0;i<5;i++)
        {
            sum += ( a[i] * a[i] );
        }
        return (sqrt(sum));
    }
};

int main()
{
    sum s1;
    s1.display();
    double t = s1;
    cout<<endl<<t<<endl;   
    return 0;
}