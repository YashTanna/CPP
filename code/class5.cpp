#include <iostream>
#include <string>
using namespace std;

class item
{
private:
    int itemid[50];
    float itemrs[50];
    int count;

public:
    void CMT() { count = 0; }
    void getitem();
    void displayitem();
    void removeitem();
    void sumofitem();
};

void
item ::getitem()
{
    cout << "Enter item code\n";
    cin >> itemid[count];
    cout << "Enter item price\n";
    cin >> itemrs[count];
    count++;
}

void item ::displayitem()
{
    for (int i = 0; i < count; i++)
    {
        cout << itemid[i] << endl;
    }
}

void item ::removeitem()
{
    int a;
    cout << "Enter code of item\n";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemid[i] == a)
        {
            itemrs[i] = 0;
        }
        else
        {
            cout << "Enter Wrong code\n";
        }
    }
}

void item ::sumofitem()
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += itemrs[i];
    }
    cout << "Sum of item's price is " << sum << endl;
}

main()
{
    int x;
    item s1;
    s1.CMT();
    do
    {
        cout<<"You can do foolowing\n";
        cout<<"Enter appropriate number \n";
        cout<<"1 : Add an item\n";   
        cout<<"2 : Display total value\n";
        cout<<"3 : Delete item\n";
        cout<<"4 : Display all items\n";
        cout<<"5 : Ouit\n";
        cout<<"What is your option\n";
        cin >> x;
        switch (x)
        {
        case 1:
            s1.getitem();
            break;
        case 2:
            s1.sumofitem();
            break;
        case 3:
            s1.removeitem();
            break;
        case 4:
            s1.displayitem();
        case 5:
            break;
        
        default:
            cout<<"Eror in input;Try again";
            break;
        }
    }
    while(x!= 5);

    return 0;
}