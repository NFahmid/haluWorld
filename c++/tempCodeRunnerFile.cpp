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
    cout << "Hello world";
}