#include<iostream>
#include<string>
using namespace std;

class number
{
    int a,b,c,d;
    public:
    friend istream & operator >>(istream & ,number &);
    friend ostream & operator <<(ostream & ,number &);
    
    
};

    istream & operator >>(istream & din,number & n)
    {
        cout<<"Enter 4 number"<<endl;
        din>>n.a>>n.b>>n.c>>n.d;
        return din;
    }

  
    ostream & operator <<(ostream & dout,number & n)
    {
        dout<<"a = "<<n.a<<endl<<"b = "<<n.b<<endl<<"c = "<<n.c<<endl<<"d = "<<n.d<<endl;
        return dout;
    }

int main()
{
    number n1;
    cin>>n1;
    cout<<n1;
    return 0;
}