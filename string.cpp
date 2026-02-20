#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name  = "harry";
    cout << "enter the name:" <<name<<endl;
    cout << "the length of name is:" << name.length() << endl;
    cout << "the name in uppercase is: " << name.upper() << endl;
    cout << "the name is lowercase is: " << name.lower() << endl;
    cout << "the name is substring is: " << name.substr(1,3) << endl;
    
}