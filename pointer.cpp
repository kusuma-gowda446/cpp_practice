#include<iostream>
using namespace std;
int main()
{
    int a =34;
    int *ptra;
    ptra = &a;
    cout << "the value of ais :" << *ptra << endl;
    cout << "the address of a is :" << ptra << endl;
}