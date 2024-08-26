#include<iostream>
using namespace std;

class info
{
    private:
        int roll;
        int mark;
        static int count;
    public:
        // void setcount()
        // {count=0;}
        void setdata(void);
        void getdata(void);
};

void info :: setdata(void)
{
    cout<<"Enter your roll number\n";
    cin>>roll;
    cout<<"Enter your mark\n";
    cin>>mark;
    count++;
    
}

void info :: getdata(void)
{
    cout<<"Student no: "<<count<<endl;
    cout<<"Roll no "<<roll<<" get "<<mark<<" marks"<<endl;
}

int info :: count;

int main()
{
    info s1,s2,s3,s4;
    s1.setdata();
    s1.getdata();

    s2.setdata();
    s2.getdata();

    s3.setdata();
    s3.getdata();

    s4.setdata();
    s4.getdata();

    return 0;
}