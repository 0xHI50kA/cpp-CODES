/*
Exercise 1
The sizeof operator can be used to determine the number of bytes occupied
in memory by a variable of a certain type. For example, sizeof(short) is
equivalent to 2.
Write a C++ program that displays the memory space required by each
fundamental type on screen
*/

//Exercise 1 Solution
#include <iostream>
using namespace std;
int main()
{
    cout << "\nSize of Fundamental Types\n"<< " Type Number of Bytes\n"
    << "----------------------------------" << endl;
    cout << " char: " << sizeof(char) << endl;
    cout << " short: " << sizeof(short)<< endl;
    cout << " int: " << sizeof(int) << endl;
    cout << " long: " << sizeof(long) << endl;
    cout << " float: " << sizeof(float)<< endl;
    cout << " double: " << sizeof(double)<<endl;
    cout << " long double: " << sizeof(long double)<< endl;
    return 0;
}