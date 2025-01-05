#include <iostream>
using namespace std;

// Spiral printing

void print(int array[][100], int n, int m){
    
    int startRow = 0;
    int endRow = n -1;
    int startCol = 0;
    int endCol = m -1 ;

    while (startCol <= endCol and startRow <= endRow){
        for (int col = startCol; col <= endCol; col++){
            cout << array[startRow][col] << " ";
        }

        for (int row = startRow + 1; row <= endRow; row++){
            cout << array[row][endCol] << " ";
        }

        for (int col = endCol - 1; col >= startCol; col--){
            if (startRow == endRow){
                break;
            }
            cout << array[endRow][col] << " ";
        }

        for (int row = endRow -1; row > startRow; row--){
            if (startCol == endCol)
                break;
            cout << array[row][startCol] << " ";
        }

        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[100][100] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};

    print(arr, 4, 4);
    
    return 0;
}
