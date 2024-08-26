#include<iostream>
#include<string>
using namespace std;

class employee
{
    static int count;
    int id;
    public:
    void getdata()
    {
        cout<<"Id = "<<id<<endl;
        // cout<<"Employee number : "<<count<<endl;
    }
    void setdata()
    {
        cout<<"Enter id \n";
        cin>>id;
        count++;
    }
    static void show()
    {
        cout<<count<<endl;
    }
};

int employee :: count;

int main()
{
    employee e1,e2,e3;
    e1.setdata();
    e1.getdata();
    e1.show();
    e2.setdata();
    e2.getdata();
    e2.show();
    e3.setdata();
    e3.getdata();
    e3.show();
    return 0;
}