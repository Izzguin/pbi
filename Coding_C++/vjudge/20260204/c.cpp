#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B; cin >> A >> B;
    vector<vector<int>>dp(A+1, vector<int>(B+1, INT_MAX));
    for(int a = 1; a <= A; a++){
        for(int b = 1; b <= B; b++){
            if(a == b){
                dp[a][b] = 0;
                continue;
            }
            for(int x = 1; x <= a-1; x++){
                dp[a][b] = min(dp[a][b], dp[x][b] + dp[a-x][b] + 1);
            }
            for(int y = 1; y <= b-1; y++){
                dp[a][b] = min(dp[a][b], dp[a][y] + dp[a][b-y] + 1);
            }
        }
    }
    cout << dp[A][B] << '\n';
}