#include<iostream>
#include<string>
using namespace std;

class test1
{
    void show()
    {
        cout<<"Test1 class\n";
    }
};

class test2 : test1
{

};

void test2::show()
{
    cout<<"Hello world\n";
}

main()
{
    
    return 0;
}