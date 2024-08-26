#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

    ostream & symbol(ostream & output)
    {
        return output<<"\tRs";
    }
int main()
{
    cout<<symbol(Rs);
    return 0;
}