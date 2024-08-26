#include<iostream>
#include<math.h>
using namespace std;

class arry
{
    int a[5];
    public:
    arry()
    {
        cout<<"Enter 5 value\n";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    operator float()
    {
        float sum = 0;
        for(int i=0;i<5;i++)
        {
            sum = sum + (a[i] * a[i]);
        }
        return (sqrt(sum));
    }

};

main()
{
    arry a1;
    float length = float(a1);
    cout<<length<<endl;
    return 0;
}