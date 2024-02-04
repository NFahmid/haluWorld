#include <iostream>
using namespace std;

class practise {
    private:
        int a, b, c, d;
    public:
        int e, f, g;
        void setdata (int a1, int b1, int c1, int d1);
        void printdata () {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
            cout << "d = " << d << endl;
            cout << "e = " << e << endl;
            cout << "f = " << f << endl;
            cout << "c = " << g << endl;
        }
};

void practise :: setdata (int a1, int b1, int c1, int d1) {
    a = a1;
    b = b1;
    c = c1;
    d = d1;
};

int main()
{ 
    practise keo;
    keo.e = 5;
    keo.f = 6;
    keo.g = 7; 
    keo.setdata(56, 42, 73, 34);
    keo.printdata();


    return 0;
}