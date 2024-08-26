#include<iostream>
using namespace std;

class employ
{
    int id;
    static int count;
    public:
        void setId(){
            cout<<"enter id "<<endl;
            cin>>id;
            count++;
        }
        void getId(){
            cout<<"Id of employ is "<<id<<" and number of employ is "<<count<<endl;
        }
};

int employ :: count=1000;

int main()
{
    employ yash;
    employ harsh;
    yash.setId();
    yash.getId();

    harsh.setId();
    harsh.getId();
    return 0;
}