#include<iostream>
#include<string>
using namespace std;
main()
{
    string s1("Tanna");
    string s2("Yash");

    cout<<"String s1 = "<<s1<<" and string s2 = "<<s2<<endl;

    cout<<"Using insert function"<<endl;

    s2.insert(0,s1);
    cout<<s2<<endl;    
    // cout<<s1<<endl;    

    cout<<"Using erase function\n";

    s2.erase(0,5);
    cout<<s2<<endl;

    cout<<"Using replace fumction \n";

    s2.replace(2,1,s1);
    cout<<s2<<endl;

    cout<<"Using Size function\n";

    cout<<"Sizze of string s2 is "<<s2.size()<<endl;

    cout<<"Using compare function\n";

    cout<<"Compare s1 with s2 is "<<s1.compare(s2)<<endl;
    cout<<"Compare s2 with s1 is "<<s2.compare(s1)<<endl;

    cout<<"Using lenght function\n";

    cout<<"Length of the string s1 is "<<s1.length()<<endl;
    cout<<"Length of the string s2 is "<<s2.length()<<endl;

    cout<<"Using swap function\n";

    cout<<"String s1 = "<<s1<<" and s2 = "<<s2<<endl;
    s1.swap(s2);
    cout<<"String s1 = "<<s1<<" and s2 = "<<s2<<endl;

    return 0;
}