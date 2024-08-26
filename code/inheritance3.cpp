#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_roll(int);
    void get_roll();
};

void student ::set_roll(int a)
{
    roll = a;
}

void student ::get_roll()
{
    cout << "Roll number of student is " << roll << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_mark(float, float);
    void get_mark();
};

void exam ::set_mark(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_mark()
{
    cout << "Marks obtained in Maths is " << maths << endl;
    cout << "Marks obtained in Physics is " << physics << endl;
}

class result : public exam
{
    public:
    void display()
    {
        get_roll();
        get_mark();
        cout<<"Obtained percenrtage is "<<(maths + physics)/2<<"%"<<endl;
    }
};

int main()
{
    result yash;
    yash.set_roll(132);
    yash.set_mark(95.76f,94.89f);
    yash.display();
    return 0;
}