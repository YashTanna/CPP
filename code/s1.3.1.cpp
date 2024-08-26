#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time() : hours(0), minutes(0), seconds(0) {}
        Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
        void setTime(int h, int m, int s) { hours = h; minutes = m; seconds = s; }
        void display24() const { cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds; }
        void display12() const;
};

void Time::display12() const {
    int h = hours % 12;
    if (h == 0) h = 12;
    cout << setfill('0') << setw(2) << h << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
    if (hours < 12) cout << " a.m.";
    else cout << " p.m.";
    cout << " (";
    display24();
    cout << ")";
}

int main() {
    int hours, minutes, seconds;
    cout << "Enter the time in hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;

    // Convert any excess seconds and minutes into additional hours
    while (seconds >= 60) {
        minutes++;
        seconds -= 60;
    }
    while (minutes >= 60) {
        hours++;
        minutes -= 60;
    }

    Time t;
    t.setTime(hours, minutes, seconds);

    cout << "The time in 24-hour format is ";
    t.display24();
    cout << endl;

    cout << "The time in 12-hour format is ";
    t.display12();
    cout << endl;

    return 0;
}
