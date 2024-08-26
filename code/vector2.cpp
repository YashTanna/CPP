#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(32);
    v.push_back(62);
    v.push_back(39);

    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}