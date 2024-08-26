#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[20];
    float cpi;

public:
    void setdata();
    void putdata();
    void changedata();
};

void student ::setdata()
{
    cout << "Enter roll no\n";
    cin >> roll;
    cout << "Enter your name\n";
    cin>>name;
    cout << "Enter CPI\n";
    cin >> cpi;
}
void student ::putdata()
{
    cout << "Name of student is " << name << " and his/her roll number is " << roll << ". he/she get " << cpi << " CPI in Final Exam\n";
}

void student :: changedata()
{
    cout << "Enter roll no\n";
    cin >> roll;
    cout << "Enter your name\n";
    cin>>name;
    cout << "Enter CPI\n";
    cin>>cpi;

    putdata();
}

main()
{
    student s1;
    s1.setdata();
    s1.putdata();
    int n;
    cout<<"If you want to change information Enter 1\nelse enter 0 for Exit\n";

    cin>>n;
    if(n==1)
    {
        s1.changedata();
    }
    return 0;
}