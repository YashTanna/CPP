#include<iostream>
#include<string>
using namespace std;

class employee
{
    int id;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter id and salary\n";
        cin>>id>>salary;
    }
    void putdata()
    {
        cout<<"Id = "<<id<<endl<<"Salary = "<<salary<<endl;
    }
};

class programer : public employee
{
    string lan;
    public:
    void getdata()
    {
        cout<<"Enter language \n";
        cin>>lan;
    }
    void putdata()
    {
        cout<<"language = "<<lan<<endl;
    }
};

int main()
{
    programer p1;
    p1.employee::getdata();
    p1.getdata();
    p1.employee::putdata();
    p1.putdata();
    return 0;
}