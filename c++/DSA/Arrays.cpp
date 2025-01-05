#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int findSum(int array[], int n){
    int sum =0;
    for (int i=0; i<n; i++){
        if (array[i] >= 0)
            sum+= array[i];
    }

    return sum;
}

void printSubarray(int array[], int n){
    for (int i=0; i<n-1; i++){
        cout << "(";
        for (int j=0; j<n; j++){
            for (int k=i; k<j; k++){
                cout << array[k] << " ";
            }
        }
        cout << ")" << endl;
    }
}

int main(int argc, char const *argv[])
{
    // int a[100] = {5};

    // for (int i=0; i<100; i++){
    //     cout << a[i] << endl;
    // }

    int b[] = {1, 2, 3, 4, -5, 0};

    // for (int i=0; i<4; i++){
    //     for (int j=i+1; j<4; j++){
    //         cout << b[i] << " " << b[j];
    //         cout << endl;
    //     }
    // }

    int size = sizeof(b)/ sizeof(int);
    // cout << findSum(b, size);

    printSubarray(b, size);



    return 0;
}
