#include <iostream>
#include <string>
using namespace std;

class rev
{
    int a, revers;

public:
    rev(int x)
    {
        a = x;
        revers = 0;
    }
    void num();
    void dispaly()
    {
        cout<<"Original number is "<<a<<" and reverse number is "<<revers<<endl;
    }
};

void rev::num()
{
    int rem,temp;
    temp = a;
    for (int i=0;temp!=0;i++)
    {
        rem = temp % 10;
        revers = (revers * 10) + rem;
        temp = temp / 10;
    }
}

int main()
{
    rev r(1234);
    r.num();
    r.dispaly();
    return 0;
}