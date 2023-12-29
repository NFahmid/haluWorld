#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 34;
    int b = 45;
    int c = 67;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // it is basically m.px in c
    

    return 0;
}