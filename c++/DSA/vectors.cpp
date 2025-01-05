#include <iostream>
using namespace std;

// making the vector library manually

class Vector{
    int *arr;
    int cs;  // current size
    int ms;  // maximum size

public:
    Vector(){
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }

    void pushBack(int d){
        if (cs == ms){
            //create new array and delete the old one and also increase the capacity
            
            int *oldarray = arr;
            ms = 2*ms;
            arr = new int[ms];

            for (int i=0; i<cs; i++){
                arr[i] = oldarray[i];
            }

            delete [] oldarray;
        }
        arr[cs] = d;
        cs++;        
    }

    void popBack(){
        if (cs>=0)
            cs--;
    }

    int front(){
        return arr[0];
    }

    int back(){
        return arr[cs-1];
    }

    int at(int i){
        return arr[i];
    }

    int size(){
        return cs;
    }

    int capacity(){
        return ms;
    }


};

int main(int argc, char const *argv[])
{
    Vector v;

    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);


    for (int i=0; i<v.size(); i++){
        cout << v.at(i) << endl;
    }

    cout << "The size of the vector is " << v.size() << endl;
    cout << "The capacity of the vector is " << v.capacity() << endl;

    return 0;
}
