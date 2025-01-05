#include <iostream>
using namespace std;

bool checkSort(int arr[], int n){
    if (n==1 or n==0){
        return true;
    }
    if (arr[0] < arr[1] and checkSort(arr+1, n-1)){
        return true;
    }
    return false;

}

void recursivePrint(int n){
    if ( n == 0 ){
        return;
    }
    recursivePrint(n-1);  // This line is very important. This recursive line is executed first and then the next cout line. 
                          // Which mneans at first the value will reaach till zero it will return. at that time the value of the
                          // n is 1 and it will print 1 first and gradually return to 5 and print 5 at last.
    cout << n << " ";
}

void decreasePrint(int n){
    if (n == 0){
        return;
    } else {
        cout << n << " " ;
    }
    decreasePrint(n-1);   
}

void firstOccurance(int arr[], int n, int index){
    if ( arr[index] == n ){
        cout << "The element is in " << index << " index"; 
    }
    else {
        firstOccurance(arr+1, n, index++);
    } 
    cout << "The number is not present in the array.";
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 6, 5};
    // cout << checkSort(arr, 5);

    // recursivePrint(5);
    // cout << endl;
    // decreasePrint(5);  

    firstOccurance(arr, 3, 0);

    return 0;
}
