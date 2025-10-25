#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));
    int row = 0, col = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i + 1;
                col = j + 1;
            }
        }
    }

    int moves = abs(3 - row) + abs(3 - col);

    cout << moves << endl;
    return 0;
}


/*
 === Possible cases ====
- INPUT
    0 1 0 0 0
    0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 0
    0 0 0 0 0
- Qualified = 3

*/