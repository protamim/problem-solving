#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int total = n * n;
        if(k == total - 1){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        vector<string> grid(n, string(n, '?'));
        int rem = k;
        // fill first with U's
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(rem > 0){
                    grid[i][j] = 'U';
                    rem--;
                } else {
                    // will fill later
                    grid[i][j] = '?';
                }
            }
        }
        // fill other rows except last row
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '?'){
                    grid[i][j] = 'D';
                }
            }
        }
        // last row: create at least two trapped arrows
        bool firstInLast = true;
        for(int j = 0; j < n; j++){
            if(grid[n-1][j] == '?'){
                if(firstInLast){
                    grid[n-1][j] = 'R';
                    firstInLast = false;
                } else {
                    grid[n-1][j] = 'L';
                }
            }
        }
        // print
        for(int i = 0; i < n; i++){
            cout << grid[i] << "\n";
        }
    }

    return 0;
}
