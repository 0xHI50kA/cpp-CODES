#include<iostream>

using namespace std;

int main()
{
    //const key word  Read Only

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2* pi * radius;

    cout << circumference <<"cm"<< '\n';

//USING NAME SPACES

// namespace first{
//     int pi = 100;
// }
// int main()
// {
//     //const key word  Read Only

//     const double pi = 3.14159;
//     double radius = 10;
//     double circumference = 2* pi * radius;

//     cout << 2 * first::pi * radius<<"cm"<< '\n';
    
       return 0;
}