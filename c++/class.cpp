#include <iostream>
using namespace std;

class employee {
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // declaration
        void getData() {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        } 

};

void employee :: setData(int a1, int b1, int c1) { // :: is scope resolution operator
    a = a1;
    b = b1;
    c = c1;
};

int main()
{
    employee bal;
    // bal.a = 1; --> This will throw error as a is private
    bal.setData(1, 2, 4);
    bal.getData();
    bal.d = 34;
    bal.e = 89;

    return 0;
}