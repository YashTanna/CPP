#include <iostream>
#include <string>
using namespace std;

class employee
{
    string name;
    string city;
    int salary;
    int da;
    int hra;
    int total;

public:
    void getdata();
    void calculate();
    void displaydata();
};

void employee :: getdata()
{
    cout<<"Enter employee name\n";
    getline(cin,name);
    cout<<"Enter city name\n";
    getline(cin,city);
    cout<<"Enter salary\n";
    cin>>salary;
    cout<<"Enter dearness allowance (DA)\n";
    cin>>da;
    cout<<"Enter house rent (HRA)\n";
    cin>>hra;
}

void employee :: calculate()
{
    total= salary + salary *(da/100) + salary * (hra/100);
}

void employee :: displaydata()
{
    cout<<"Name of employy is "<<name<<endl;
    cout<<"He is from "<<city<<" and his salary is "<<salary<<endl;
    cout<<"He get "<<da<<" INR DA and "<<hra<<" INR HRA\n";
    cout<<"His Total ncome is "<<total<<" INR"<<endl;
}

main()
{
    employee e1;
    e1.getdata();
    e1.calculate();
    e1.displaydata();
    return 0;
}