#include <iostream>
using namespace std;

void swapReference(int &a, int &b) // call by reference` 
{
    int temp = a; 
    a = b;
    b = temp;
}

int & swapReferenc(int &a, int &b) // call by reference` 
{
    int temp = a; 
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 8, b = 9; 

    cout << "a = " << a << endl;  
    cout << "b = " << b << endl;

    swapReference(a, b); 

    cout << "a = " << a << endl; 
    cout << "b = " << b << endl;

    swapReferenc(a, b) = 10; // a = 10  // returns a reference to a  // a is lvalue   // a = 10 is an assignment expression

    cout << "a = " << a << endl;  
    
    return 0;
}