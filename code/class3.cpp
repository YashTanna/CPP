#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void counter()
    {
        counter = 0;
    }
    void additem();
    void displayitem();
};

void shop ::additem()
{
    cout << "Enter id of your item\n";
    cin >> itemid[counter];
    cout << "Enter price of your item\n";
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayitem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with id " << itemid << " is " << itemprice << endl;
    }
}

int main()
{
    shop dukan;
    dukan.counter();
    dukan.additem();
    dukan.additem();
    dukan.additem();
    dukan.additem();
    dukan.additem();
    dukan.displayitem();
    return 0;
}