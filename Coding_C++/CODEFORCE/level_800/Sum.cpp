#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int>ans(3);
        for(int i = 0 ; i < 3; i++){
            cin >> ans[i];
        }
        sort(ans.begin(), ans.end());
        if(ans[0] + ans[1] == ans[2]){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
}