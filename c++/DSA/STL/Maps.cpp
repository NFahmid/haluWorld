#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, int> m){
    for (auto it : m){
        cout<< it.first << " " << it.second << endl;
    }
}

int main(int argc, char const *argv[])
{
    // map<int, string> m;    // declaring a map
    // m[1] = "abc";         // setting the key to 1, and value to abc
    // m[2] = "cdi";
    // m.insert({3, "abcd"});  //alternative way;

    // for (auto it = m.begin(); it!= m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // m[2] = "cdicdi";  // it will replace the value of key 2, wont create a new key

    // auto it = m.find(2);   // will return the iterator to key 2, if 2 doesnt exist it will return the end 

    
    // m.erase(3);       // deletes the key 3, can also pass the iterator to 3

    // m.clear();     // clears all the entries
    // printMap(m); 


    // map <string, int> ma;
    // ma["abc"] = 2;
    // ma["def"] = 1;
    // ma["csd"] = 5;
    // printMap(ma);       // maps are stored in lexicographic order


                  // finding the frequency of a map
                  
    // map<string, int> m;
    // int n;
    // cin >> n;

    // for (int i=0; i<n; i++){
    //     string s;
    //     cin >> s;
    //     m[s]++;
    // }
    //     for (auto it = m.begin(); it!= m.end(); it++){
    //         cout << (*it).first << " " << (*it).second << endl;
    //     }

    map<int, int> mx;
    mx[1] = 2;
    mx[2]++;
    mx[2]++;
    mx[2]++;

    printMap(mx);

    for (auto value : mx){
        cout << value << endl;
    }



    return 0;
}
