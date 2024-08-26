#include<iostream>
#include<string>
using namespace std;

template <class t>
void bubble(t a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                t temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    // char s1[] = "yash";   
    int a[] = {5,6,9,8,1,2,4,7,3};   
    bubble(a,9);
    for(int i=0;i<9;i++)
    {
        cout<<a[i];
    }
    return 0;
}