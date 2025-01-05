#include <iostream>
using namespace std;

int fibo(int n){
    if ((n-1) == 0){
        return 1;
    }
    int ans = n + fibo(n-1);
    return ans;
}

int main(int argc, char const *argv[])
{
    int a = fibo(5);
    cout << a;
    return 0;
}
