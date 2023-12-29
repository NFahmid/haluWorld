#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    // a = 7; // You will get an error because a is a constant
    cout<<"The value of a is "<<a<<endl;

    // const int b; // You will get an error because b is a constant and it is not initialized

    // const int c = a + b; // You will get an error because b is a constant and it is not initialized

    
    return 0;
}