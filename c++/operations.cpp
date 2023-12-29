#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: "; 
    cin>>b;

    int a = 5;

    cout<<"The value of the a + b is "<< a+b << endl;
    cout<<"The value of the a - b is "<< a-b << endl;
    cout<<"The value of the a * b is "<< a*b << endl;
    cout<<"The value of the a / b is "<< a/b << endl;
    cout<<"The value of the a++ is "<< a++ << endl;
    cout<<"The value of the ++a is "<< ++a << endl;



    int &c = a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<c<<endl;
}