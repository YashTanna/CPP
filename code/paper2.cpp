#include <iostream>
using namespace std;

class time
{
    int hours;
    int minutes;
    int seconds;

public:
    void readtime();
    void displaytime();
    void sum(time ,time );
    void dissum( );
};

void time ::readtime()
{
    cout << "Enter time in formate of hh|mm|ss\n";
    cin >> hours >> minutes>>seconds;
}
void time :: displaytime()
{
    cout<<"Time is "<<hours<<" Hour "<<minutes<<" minutes "<<seconds<<" Seconds"<<endl;
}



int main()
{
    time t1,t2,c3;
    t1.readtime();
    t1.displaytime();

    t2.readtime();
    t2.displaytime();

    c3.sum(t1,t2);
    c3.dissum();


    return 0;
}

void time ::sum(time t1,time t2)
{
    hours=t1.hours + t2.hours;
    minutes=t1.minutes+t2.minutes;
    seconds=t1.seconds+t2.seconds;
    // dissum(a,b,c);
}

void time :: dissum()
{
    if(minutes>60)
    {
        hours += (minutes/60);
        minutes += (minutes%60);
    }
    if(seconds>=60)
    {
        minutes += (seconds/60);
        seconds += (seconds%60); 
    }
    cout<<"Sum of hours is "<<hours<<endl;
    cout<<"Sum of minutes is "<<minutes<<endl;
    cout<<"Sum of Second is "<<seconds<<endl;

}