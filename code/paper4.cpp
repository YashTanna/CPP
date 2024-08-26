#include<iostream>
#include<string>
using namespace std;

void reverse(char []);
void reverse(int []);

main()
{
    int a[20];
    char str[20];
    cout<<"Enter 20 number \n";
    for(int i=0;i<20;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter string \n";
    cin>>str;
    reverse(a);
    reverse(str);
    return 0;
}

void reverse(int a[])
{
    int ans[20];
    int j=20;
    for(int i=0;i<20;i++)
    {
        a[j--]=ans[i];
    }

    cout<<"Reverse of number is \n";
    for(int i=0;i<20;i++)
    {
        cout<<ans[i];
    }
}

void reverse(char a[])
{
    char ans[20];
    int j=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        a[j--]=ans[i];
    }    
    ans[i]='\0';

    cout<<"Reverse of string is "<<ans<<endl;
}