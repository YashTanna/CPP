#include<iostream>
using namespace std;

class dis
{
    int feet;
    int inch;
    public:
    dis(){
        cout<<"Enter Feets\n";
        int a;
        cin>>a;
        feet = a;
        cout<<"Enter Inches\n";
        cin>>a;
        inch = a;
    }
    dis(int a,int b)
    {
        feet = a;
        inch = b;
    }
    void display()
    {
        cout<<feet<<" feets and "<<inch<<" inches\n";
    }

    dis operator +(dis l)
    {
        dis d(0,0);
        d.feet = feet + l.feet;
        d.inch = inch + l.inch;
        if(d.inch > 12)
        {
            d.feet +=  (d.inch / 12);
            d.inch = d.inch % 12;
        }
        return d;
    }
};

main()
{
    dis d1,d2;
    d1.display();
    d2.display();
    dis d3(0,0);
    d3 = d1 + d2;
    d3.display();
    return 0;
}