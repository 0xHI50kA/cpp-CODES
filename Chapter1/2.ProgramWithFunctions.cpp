/*
    A program with some functions and comments 
*/
#include <iostream>

using namespace std;

void line(), message();

void line(){
    cout<<"-------------------------------------"<<endl;
}
void message(){
    cout<<"This is in the function message()"<<endl;
}

int main()
{
    cout<<"the program starts at main()"<<endl;
    line();
    message();
    line();
    cout<<"At the end of main()"<<endl;

    return 0;
}
