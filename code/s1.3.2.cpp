#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
    private:
        int hou,min,sec;
    public:
        void setdata(int h,int m,int s)
        {
            hou=h;
            min=m;
            sec=s;
        }
        void display12hourformate();
        void display24hourformate();
};

void Time :: display12hourformate()
{
    if(hou>24 && hou<0 && min<0 && min>59 && sec<0 && sec>59)
    {
        cout<<"Invalid input data\n";
        exit(0);
    }
    if((hou==0))
    {
        cout<<setfill('0')<<setw(2)<<hou+12<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<" a.m.";
    }
    else if(hou>=1 && hou<=11) 
    {
        cout<<setfill('0')<<setw(2)<<hou<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<" a.m.";
    }
    else if(hou==12)
    {
        cout<<setfill('0')<<setw(2)<<hou<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<" p.m.";
    }
    else if(hou>=13 && hou<=23)
    {
        cout<<setfill('0')<<setw(2)<<hou-12<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<" p.m.";
    }
    else if(hou==24&&min==0&&sec==0)
    {
        cout<<"12:00:00 a.m.";
    }
    else 
    {
        cout<<"Undifine time";
        exit(0);
    }
    cout<<" (";
    display24hourformate();
    cout<<" )";
    cout<<endl;
}

void Time :: display24hourformate()
{
    cout<<setfill('0')<<setw(2)<<hou<<":"<<setw(2)<<min<<":"<<setw(2)<<sec;
}

main()
{
    Time t1,t2,t3;
    t1.setdata(23,56,59);
    t1.display12hourformate();
    t2.setdata(5,12,45);
    t2.display12hourformate();
    t3.setdata(0,12,30);
    t3.display12hourformate();
    return 0;
}