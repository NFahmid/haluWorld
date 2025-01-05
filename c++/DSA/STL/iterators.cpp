#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3, 4, 5};


    // // declaring iterators
    // vector<int> :: iterator it = v.begin();
    // cout<< (*it) << endl;             // the iterator points to the beginning element: 1

    // cout<<(*(it +1)) << endl;         // the iterator points to the next element: 2


    // for (it = v.begin(); it!= v.end(); it++){          // the iterator starts from the beginning and runs till the end and prints all the elements
    //     cout << (*it) <<endl;
    // }

    // vector<pair<int, int>> vp = {{1,2}, {2,3}, {3,4}};
    // vector<pair<int, int>> :: iterator it;

    // for (it = vp.begin(); it!=vp.end(); it++){
    //     cout<< (*it).first << " " << (*it).second << endl;
    //     // or
    //     cout<< (it -> first) << " " << (it -> second) << endl;
    //     //  (*it).first  <=>  (it -> first)
    // }

    // Range based loops

    // for (int value : v){
    //     cout << value << " ";
    // }
    // cout << endl;

    // for (pair<int, int> value : vp){
    //     cout<< value.first << " " << value.second << endl;
    // }
    // cout<< endl;

    // auto keyword
    // if we use auto, then the data type is determined automatically
    // auto i = 5, i will be considered int
    // auto i=5.3, i will be considered float

    for (auto it = v.begin(); it != v.end(); it++){
        cout<< (*it) << " ";
    }

    cout << endl;

    for (auto value : v){
        cout << value << " ";
    }

    return 0;
}
