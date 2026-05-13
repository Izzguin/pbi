#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int ans[m][n] = {0};
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            ans[j][i] = matrix[n-1-i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}