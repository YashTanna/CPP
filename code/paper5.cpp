#include<iostream>
#include<string>
using namespace std;
struct employee
{
    char name[20];
    int Id;
    int resignation;
    int salary;
};

void order(employee *,int );

main()
{
    int n;
    cout<<"How many employee you have?\n";
    cin>>n;
    employee * ptr=new employee[n];
    cout<<"Enter data of employee\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name\n";
        cin>>ptr->name;
        cout<<"Enter Id \n";
        cin>>ptr->Id;
        cout<<"Enter resignation \n";
        cin>>ptr->resignation;
        cout<<"Enter salary\n";
        cin>>ptr->salary;
    }

    order(ptr,n);
    cout<<"Data entered by user is \n";
    for(int i=0;i<n;i++)
    {
        cout<<"Name : "<<ptr->name<<endl;
        cout<<"Id   : "<<ptr->Id<<endl;
        cout<<"resignation : "<<ptr->resignation<<endl;
        cout<<"salary : "<<ptr->salary<<endl;
    }
    return 0;
}

void order(employee *  ptr,int n)
{
    employee temp;
    // int max=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i].salary>ptr[j].salary)
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}