#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int size = s.size();

    int repeat = 1;

    for (int i = 0; i < size; i++)
    {
        if (s[i] == s[i + 1])
        {
            repeat++;
        }
        else
        {
            if (repeat > 1)
                cout << s[i] << repeat;
            else if (repeat == 1)
                cout << s[i];
            repeat = 1;
        }
    }  

    return 0;
}
