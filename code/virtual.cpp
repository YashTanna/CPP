#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_roll(int a)
    {
        roll = a;
    }

    void print_roll()
    {
        cout << "Roll number is " << roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_mark()
    {
        cout << "Obtained marks in maths is " << maths << " and in physics is " << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }

    void get_score()
    {
        cout << "Your score in PT is " << score << endl;
    }
};

class result :  public sport, public test
{
    protected:
    float total;
    float pr;
    public:
    void display_total()
    {
        get_mark();
        get_score();
        total = score + maths + physics;
        pr = total /3;
        cout<<"Total marks is "<<total<<endl<<"Student with roll no "<<roll<<" get "<<pr<<"%\n"; 
    }
};

int main()
{
    result r1;
    r1.set_roll(131);
    r1.set_mark(96.83,94.85);
    r1.set_score(92);
    r1.display_total();
    return 0;
}