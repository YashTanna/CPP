#include <iostream>
using namespace std;

void convert(char[]);

int main()
{
    char a[20];
    cout << "Enter string \n";

    cin >> a;
    // cout << a;

    convert(a);
    cout << "New string is \n"
         << a << endl;
    return 0;
}

void convert(char a[])
{
    for (int i = 0; a[i] != NULL; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] -= ('A' - 'a');
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] + = ('A' - 'a');
        }
    }
}