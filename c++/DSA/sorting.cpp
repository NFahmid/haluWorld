#include<iostream>
using namespace std;

void bubblesort(int a[], int size){
    for (int i=0; i< size-1; i++){
        for (int j=0; j < size - i - 1; j++){
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}


int main(int argc, char const *argv[])
{
    int a[] = {5,3,4,2,1};
    int size = sizeof(a)/sizeof(int);

    cout << " The original array: ";

    for (int i=0; i<size; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    bubblesort(a, size);

    cout << "By using bubblesorting: " << endl;

    for (int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
