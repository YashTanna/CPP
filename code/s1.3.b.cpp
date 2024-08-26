#include<iostream>
using namespace std;

class length
{
    private:
        int totalinch;
    public:
        void setlength(int l)
        {
            totalinch=l;
        }
        void displaylength()
        {
            int divider = totalinch / 12;
            int reminder = totalinch % 12;
            cout<<divider<<"'"<<reminder<<"''"<<endl;
        }
        void addlength(int l)
        {
            totalinch += l;
        }
        void addlength(int f,int l)
        {
            totalinch += 12*f + l;
        }
        void addlength(length & l)
        {
            totalinch += l.totalinch;
        }
};

main()
{
    length l1,l2;
    l1.setlength(50);
    l1.displaylength();
    l2.setlength(23);
    l2.displaylength();
    l1.addlength(l2);
    l1.displaylength();
    return 0;
}