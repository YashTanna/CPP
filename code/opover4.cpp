#include <iostream>
#include <string>
using namespace std;

class sport;

class exam
{
    float mark1, mark2;
    float pr;

public:
    exam() {}
    exam(int a, int b)
    {
        mark1 = a;
        mark2 = b;
        pr = (a+b)/2;
    }
    void display()
    {
        cout<<"Mark in first subject is "<<mark1<<" and in second subject is "<<mark2<<endl<<"Total presantage is "<<pr<<endl;
    }
    friend float operator +(exam &,sport &);

};

class sport
{
    float score1,score2;
    float pr;
    public:
    sport(int a,int b)
    {
        score1=a;
        score2=b;
        pr = (score1+score2)/2;
    }
    void display()
    {
        cout<<"score in first sport is "<<score1<<" and in second sport is "<<score2<<endl<<"Total presantage is "<<pr<<endl;
    }
    friend float operator +(exam &,sport &);
};

float operator +(exam & e,sport & s)
{
    return ((e.pr+s.pr)/2);
}

int main()
{
    exam e(96,83);
    e.display();
    sport s(86,97);
    s.display();
    float total = e + s;
    cout<<"Total result is "<<total<<endl;
    return 0;
}