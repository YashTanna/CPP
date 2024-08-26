#include<iostream>
#include<string>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==1 || j==1 || i==col || j==row)
            {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}