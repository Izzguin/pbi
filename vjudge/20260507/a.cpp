#include <bits/stdc++.h>
using namespace std;

main(){
    string a, b; cin >> a >> b;
    int c = a.size(); int d = b.size();
    vector<vector<int>>dp(c+1, vector<int>(d+1));
    
    for(int i = 0; i <= c; i++)dp[i][0] = i;
    for(int j = 0; j <= d; j++)dp[0][j] = j;

    for(int i = 1; i <= c; i++){
        for(int j = 1; j <= d; j++){
            if(a[i - 1] == b[j -1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
            }
        }
    }
    cout << dp[c][d];
}