#include <iostream>
using namespace std;

int fun()
{
    static int x = 0; // static variable is initialized only once and it is not destroyed after the function call
    x++;  // next time this function is called, the value of x will be retained
    return x;
}

int main()
{
    int a = 5, b = 10;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "fun() = " << fun() << endl;
    cout << "fun() = " << fun() << endl;
    cout << "fun() = " << fun() << endl;


    return 0;
}