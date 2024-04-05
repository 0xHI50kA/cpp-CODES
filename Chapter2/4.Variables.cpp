//Definition of variables and its use
#include <iostream>
using namespace std;

int gVar1;
int gVar2 = 2;

int main()
{
    char ch('A');// local variable being initialized 
              // or char ch = 'A';
    cout << "\nValue of char('A'): " << ch << endl;
    cout << "Value of gVar1: "<< gVar1 << endl;
    cout << "Value of gVar2: "<< gVar2 << endl;

    int sum, number =3;
    sum = number + 5; // Local variable with or without initialization
    cout << "Value of sum: "<< sum << endl;

    return 0;
}