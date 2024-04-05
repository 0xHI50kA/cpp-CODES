#include <iostream>

using namespace std;
// Circumference and area of a circle

const double pi = 3.141593;
int main()
{
    double area, circuit, radius = 1.5;

    area = pi*radius*radius;
    circuit = 2 *pi *radius;
    
    cout<<"\nto evaluate a circle:"<<endl;
    cout<<"\nRadius: "<<radius<<endl;
    cout<<"the Area of Circle is :"<< area<<endl;
    cout<<"the Circumference of Circle is :"<< circuit<<endl;

    return 0;
}