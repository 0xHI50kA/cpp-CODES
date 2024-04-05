/*
Exercise 4
Write a C++ program that two defines variables for floating-point numbers and
initializes them with the values
123.456 and 76.543
Then display the sum and the difference of these two numbers on screen.

*/


//solution for exersen 4
#include <iostream>
using namespace std;
int main()
{
    float x = 123.456F, // or double
    y = 76.543F,
    sum;
    sum = x + y;
    cout << "Total: "
    << x << " + " << y << " = " << sum << endl;
    cout << "Difference: "
    << x << " — " << y << " = " << (x - y) << endl;
    return 0;
}