#include<iostream>
#include<string>
using namespace std;

class time
{
    int hou;
    int min;
    public:
    void gettime()
    {
        cout<<"Enter time in hour and minutes \n";
        cin>>hou>>min;
    }
    void displaytime()
    {
        cout<<"Enter time is "<<hou<<" : "<<min<<endl;
    }

    time sumtime(time t1,time t2)
    {
        time t;
        t.hou= t1.hou+t2.hou;
        t.min=t1.min+t2.min;
        // int rem;

        // if(min>60)
        // {
        //     rem = min%10;
        //     hou = hou + rem;
        //     min = min/10;
        // }

        return t;
    }
};

int main()
{
    time t1,t2,t3;
    t1.gettime();
    t1.displaytime();

    t2.gettime();
    t2.displaytime();

    t3.sumtime(t1,t2);
    t3.displaytime();
    return 0;
}