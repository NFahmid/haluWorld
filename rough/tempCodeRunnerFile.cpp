#include <iostream>
#include <vector>
using namespace std;

int main() {
    int asx, asy, icx, icy, size;
    cin >> asx >> asy >> icx >> icy >> size;

    vector<pair<int, int>> vp(size);
    for (int i = 0; i < size; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }

    int count = 0;
    for (const auto& p : vp) {
        
        
        if (icx + p.first < asx && icy + p.second < asy) {
            do
            {
                count++;
                icx += p.first;
                icy += p.second;
            } while (icx + p.first < asx && icy + p.second < asy);
        }
    }

    cout << count << endl;
    return 0;
}
