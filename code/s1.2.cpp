#include<iostream>
#include<string>
using namespace std;

void reverse(char *,int);
void reverse(int *,int );

int main()
{
    cout<<"How many number you want to enter\n";
    int n;
    cin>>n;
    int *ptr = new int[n];
    cout<<"Enter "<<n<<" elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"How many character you want to insert\n";
    int a;
    cin>>a;
    char *p = new char[a];
    cout<<"Enter your name\n";
    cin>>p;
    cout<<"\n\n\n\n\n\n\n\n";
    
    cout<<"Reverse of arry of number is \n";
    reverse(ptr,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<*(ptr+i);
    // }
    cout<<endl;
    
    cout<<"Reverse of string is \n";
    reverse(p,a);
    return 0;
}

void reverse(int *p,int n)
{
    int *ptr = new int[n];
    int l=n;
    for(int i=0;i<n;i++)
    {
        *(ptr + i) = *(p+l);
        l--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i);
    }
}

void reverse(char * p,int n)
{
    char *ptr = new char[n];
    int l=n;
    for(int i=0;i<n;i++)    
    {
        *(ptr + i) = *(p+l);
        l--;
    }

    cout<<ptr;
}