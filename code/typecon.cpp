#include<iostream>
using namespace std;

class String 
{
    char *c;
    int len;
    public:
    String(){
        len = 0;
    }
    String(char *a){
        c = a;
        len = 0;
    }
    void setdata()
    {
        
    }
    void display()
    {
        for(int i=0;c[i]!=NULL;i++)
        {
            len++;
        }
        for(int i=0;i<len;i++)
        {
            cout<<(*c);
        }
        cout<<endl;
    }
};

main()
{
    char a[] = "Yash";
    String s1(&a[0]);
    s1.display();
    return 0;
}