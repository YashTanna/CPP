#include<iostream>
#include<cstring>
using namespace std;

// class employ
// {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//     void setdata(int a1,int b1,int c1);
//     void getdata();
// };

// void employ :: setdata(int a1,int b1,int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }



// void employ :: getdata()
// {
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<c<<endl;
//     cout<<"The value of d is "<<d<<endl;
//     cout<<"The value of e is "<<e<<endl;
// }



class animle
{
    private:
        string name;
        int age;
    public:
        string sound;
    void setdata(char *[] ,int );
    void getdata();
};

void animle :: setdata(char *name1[],int age1)
{
    strcpy(name,name1);
    age=age1;
}
void animle :: getdata()
{
    cout<<"name of animle is "<<name<<endl;
    cout<<"age of animle is "<<age<<endl;
    cout<<"sound of animle is "<<sound<<endl;
}

 int main()
 {
    // employ yash;
    // yash.d=35;
    // yash.e=36;
    // // yash.a=12; --> a is privete 
    // yash.setdata(32,33,34);
    // yash.getdata();
    animle dog;
    dog.setdata("Tommy",3);
    dog.sound="bark";
    dog.getdata();
    return 0;
 }