#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout<<"Size of vector at this point: "<< v.size() << endl;
    for (int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printNestedVector(vector<pair<int, int>> v){
    cout<<"Size of vector: " << v.size() << endl;
    for (int i=0; i<v.size(); i++){
        cout<< v[i].first << " " << v[i].second << endl;
    }
}

int main(int argc, char const *argv[])
{
    // pair<int, string> p;
    // p = {21, "Fahmid"};
    // p = make_pair(21, "Fahmid");  //Can be set in any of the above two ways

    // pair<int, string> p1 = p;  // p1 is a copy of p
    // // but p is passed by reference here so if p1.first is set to something else, p will not be changed
    // // to change it we have to pass it by value
    // pair<int, string> &p2 = p;
    // p2.first = 32;  // now it will change to 32
    // cout<<p.first<<" "<<p.second;


    //                Vectors
    // Vectors are like arrays only in here, the size is not declared and it is customizable

    // vector<int> v; // we created a vector of int, we can also create vectors of pairs
    // int n;
    // cin>>n;
    // for (int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);  // it adds x to the last of v, and we can keep adding
    // }

    // cout<<v.size() << " Size\n";

    // for (int i=0; i<v.size(); ++i){
    //     cout<<v[i]<<endl;
    // }

    // vector<int> v1(10);  // we declare a vector with 10 space, and by default all values will be 0
    // vector<int> v2(10, 5);  // we declared another vector but in this case instead of 0 the values will be 5
    // printVector(v1);
    // printVector(v2);
    // v1.push_back(5);
    // v1.push_back(9);
    // printVector(v1);

    // v2.pop_back();     // removes the last element
    // printVector(v2);
    // v2.pop_back();
    // printVector(v2);

                        // Vectors and Pairs


    // vector<pair<int, int>> v3 = {{1,2}, {2,3}, {3,4}};
    // printNestedVector(v3);

                           // Array of vectors
    
    int N;
    cin >> N;
    // vector<int> v0[N];
    // for (int i=0; i<N; i++){
    //     int n;
    //     cin >> n;
    //     for (int j=0; j<n; j++){
    //         int x;
    //         cin>>x;
    //         v0[i].push_back(x);
    //     }
    // }


                    //   Vector of vectors

    vector<vector<int>> v1;
    for (int i=0; i<N; i++){
        int n;
        cin>>n;
        vector<int> temp;
        for (int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v1.push_back(temp);
    }

    for (int i=0; i<N; i++){
        printVector(v1[i]);
    }

    cout << v1[0][0];
}
