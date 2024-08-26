#include<iostream>
using namespace std;

main()
{
    int m,n;
    cin>>m>>n;
    int *ptr[m];
    for(int i=0;i<m;i++)
    {
        int size ;
        cin>>size;
        ptr[i] = new int[size];
        for(int j=0;j<size;j++)
        {
            cin>>ptr[i][j];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<ptr[a][b];
    }
    return 0;
}