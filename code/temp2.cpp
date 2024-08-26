#include<iostream>
#include<string>
using namespace std;

template <class p>
class base
{
    p len;
    p *ptr;
    public:
    base()
    {
        cout<<"Enter length\n";
        cin>>len;
        ptr = new p[len];
        for(int i=0;i<len;i++)
        {
            ptr[i] = 0;
        }
    }
    void getdata()
    {
        cout<<"Enter value of arry\n";
        for(int i=0;i<len;i++)
        {
            cin>>ptr[i];
        }
    }
    p operator *(base & b)
    {
        
    }
};

int main()
{
    
    return 0;
}