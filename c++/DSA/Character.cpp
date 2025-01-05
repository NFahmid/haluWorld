#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // char sentence[1000];

    // char temp = cin.get();

    // int len=0;

    // int number =0;
    // int character = 0;
    // int space = 0;
    // while (temp != '\n'){
    //     len++;

    //     if (temp >= '0' and temp <= '9'){
    //         number++;
    //     } else if (temp >= 'A' and temp <= 'z'){
    //         character++;
    //     } else if (temp == ' '){
    //         space++;
    //     }
    //     cout << temp;

    //     temp = cin.get();
    // }

    // cout << endl << "The number of digits are " << number << endl << "The number of characters are " << character << endl << "The number of spaces are " << space;
    
    // Using cin.getline()

    char sent[1000];

    cin.getline(sent, 1000);

    cout << sent << endl;
    
    return 0;
}
