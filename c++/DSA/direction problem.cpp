#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char direction[1000];
    char newDirection[1000];

    char temp = cin.get();

    int len = 1;
    int j=0;

    int x = 0;
    int y = 0;

    while (temp != '\n'){
        cout << temp;
        len++;

        if (temp == 'E'){
            x++;
        } else if (temp == 'W'){
            x--;
        } else if (temp == 'N'){
            y++;
        } else if (temp == 'S'){
            y--;
        }

        temp = cin.get();

    }

    cout << endl;

    if (x > 0){
        for (int i=0; i<x; i++){
            cout << 'E';
        }
    } else if (x < 0){
        for (int i=x; i<0; i++){
            cout << "W";
        }
    } 
    if (y > 0){
        for (int i=0; i<y; i++){
            cout << 'N';
        }
    } else if (y < 0){
        for (int i=y; i<0; i++){
            cout << 'S';
        }
    }

    cout << endl;

    return 0;
}
