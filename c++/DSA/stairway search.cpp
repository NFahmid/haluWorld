#include <iostream>
using namespace std;

pair<int, int> check (int array[100][100], int n, int m, int key){
    if (key <= array[0][0] and key >= array[n][m]){
        return {-1,-1};
    }

    int i=0;
    int j = m-1;

    while (i<=n-1 and j>=0){
        if (array[i][j] == key){
            return{i,j};
        } else if (array[i][j] > key){
            j--;
        } else {
            i++;
        }

    }

    return {-1, -1};

}

int main(int argc, char const *argv[])
{
    int array[100][100] = {{1,2,3,4},
                           {5,6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}};

    pair<int, int> p = check(array, 4, 4, 16);

    cout << p.first << " " << p.second;
    
    return 0;
}
