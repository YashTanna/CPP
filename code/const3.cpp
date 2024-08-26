#include<iostream>
#include<string>
using namespace std;

class test
{
    int marks;
    public:
    test(int a)
    {
        marks = a;
        cout<<"In test \n";
    }
};

class sport
{
    int score;
    public:
    // sport (int a)
    // {
    //     score = a;
    //     cout<<"In sports\n";
    // }
    sport(){
        cout<<"In sport\n";
    }
};

class result : public sport ,public test
{
    public:
    result(int a): test(a)
    {
        cout<<"In result\n";
    }
};

int main()
{
    
    result r1(96);

    return 0;
}