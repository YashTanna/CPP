#include<iostream>
#include<string>
using namespace std;

class binary 
{
    string s;
    public:
        void read();
        void check();
    
};

void binary :: read()
{
    cout<<"Enter binory number \n";
    cin>>s;
}

void binary :: check()
{
    for(int i=0;i<s.length();i++)
    {

        if(s.at(i)=='0' || s.at(i)=='1')
        {
            
        }
        else 
        {
            cout<<"Invalid binory formate \n";
            exit(0);
        }
    }
}

int main()
{
    binary yash;
    yash.read();
    yash.check();
    return 0;
}