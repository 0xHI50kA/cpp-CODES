// To display hexadecimal integer literals and
// decimal integer literals.
//
#include <iostream>
using namespace std;
int main()
{
// cout outputs integers as decimal integers:
cout << "\nValue of 0xFF = " << 0xFF << " decimal"
<< endl; // Output: 255 decimal
// The manipulator hex changes output to hexadecimal
// format (dec changes to decimal format):
cout << "Value of 27 = " << hex << 26 <<" hexadecimal"
<< endl; // Output: 1b hexadecimal
return 0;
}

