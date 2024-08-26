#include <iostream>
#include <string>
using namespace std;

class time
{
    int hou;
    int min;
    int sec;

public:
    void settime();
    void displaytime();
    void changefor();
    void formate();
};

int
main()
{
    time t1;
    t1.formate();
    t1.settime();
    t1.displaytime();
    t1.changefor();
    return 0;
}

void time ::settime()
{
    cout << "Enter time in hh:mm:ss formate \n";
    cin >> hou >> min >> sec;
}

void time ::displaytime()
{
    cout << "Time is \n";
    cout << hou << " hours " << min << " minuts " << sec << " second \n";
}

void time ::changefor()
{
    if (hou <= 12)
    {
        cout << "Time is \n";
        cout<<hou<<":"<<min<<":"<<sec<<" AM\n";
    }
    else
    {
        cout<<(hou-12)<<":"<<min<<":"<<sec<<" PM\n";
    }
}

void time :: formate()
{
    if(sec>60)
    {
        min = min + (sec/60);
        sec = sec%60;
    }
    if(min>60)
    {
        hou = hou + (hou/60);
        min = min % 60;
    }

}