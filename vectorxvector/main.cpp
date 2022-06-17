#include <iostream>

#include <vector>

#include "cmath"

using namespace std;

int main() {

    const char symbol = 'X';
    vector<vector<char>> vct;
    int n = 5;
    int m = 10;
    bool isOnlyLines = true;
    vct.reserve(n);

    for (int i = 0; i < n; ++i) {
        vct.push_back(vector<char>());

        for (int j = 0; j < m; ++j) {
            vct.at(i).push_back(symbol);
        }
    }

    for (int i = 0; i < vct.size(); ++i) {
        for (int j = 0; j < vct[i].size(); ++j) {
            if(isOnlyLines)
            {
                if(i == 0 || j == 0 || i == vct.size() - 1 || j == vct[i].size() - 1) {
                    cout << vct.at(i).at(j)  << " ";
                } else {
                    cout << "  ";
                }
            }
            else
            {
                cout << vct.at(i).at(j) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
