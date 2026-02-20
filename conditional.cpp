                                                // conditinonal statments
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age: "<< endl;
    cin >> age;
    if(age >= 18)
    {
        cout << "you are eligiable to vote" << endl;

    }
    else{
        cout << "you are not eligiable to vaote" << endl;

    }
}
                                         



{    
    int age;
    cout << "enter your age: "<< endl;
    cin >> age;
    if(age >= 18)
    {
        cout << "you are eligiable to vote" << endl;

    }
    else if (age < 18 && age >= 0)
    {
        cout << "you are not eligiable to vaote" << endl;

    }
    else
    {
        cout << "invalid input" <<endl;
    }
}                     