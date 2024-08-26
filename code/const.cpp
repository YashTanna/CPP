#include<iostream>
#include<string>
using namespace std;

class test
{
    int mark;
    int mark2;
    public:
    test(int a=98,int b=99)
    {
        mark=a;
        mark2=b;
    }
    test(){}
    void display()
    {
        cout<<mark<<endl<<mark2<<endl;
    }
    test (test & t)
    {
        mark=t.mark;
        mark2 = t.mark2;
    }
};

int main()
{
    test t1 = test(85,86);
    t1.display();

    test t2 = t1;
    t2.display();

    test t3 = test(t1);
    t3.display();

    return 0;
}