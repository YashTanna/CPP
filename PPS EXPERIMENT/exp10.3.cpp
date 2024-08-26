#include<iostream>
#include<string>
using namespace std;

template <class t>

class vector
{
    t *p;
    t size;
    public:
    vector()
    {
        size = 0;
    }
    void create(int a)
    {
        size = a;
        p = new t[size];
    }
    void set()
    {
        cout<<"Enter "<<size<<" element"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>p[i];
        }
        cout<<endl;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<p[i];
        }
        cout<<endl;
    }
    void modify()
    {
        cout<<"Enter position to edit element\n";
        t pos;
        cin>>pos;
        cout<<"Enter element in position "<<pos<<endl;
        pos--;
        cin>>p[pos];

        cout<<"Enter position you want to delet\n";
        cin>>pos;
        pos--;
        for(int i=pos;i<size;i++)
        {
            p[i] = p[i+1];
        }
        size--;
    }

};

int main()
{
    vector <int> v1;
    v1.create(8);
    v1.set();;
    v1.display();
    v1.modify();
    v1.display();
    return 0;
}