#include <iostream>
using namespace std;

typedef struct stdu
{
    int a;
    int b;
} st;


int main()
{
    st s;
    s.a = 5;
    s.b = 10;

    cout << "s.a = " << s.a << endl;
    cout << "s.b = " << s.b << endl;


    return 0;
}