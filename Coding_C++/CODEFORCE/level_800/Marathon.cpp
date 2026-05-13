#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int>ans(4);
        for(int i = 0;i < 4; i++){
            cin >> ans[i];
        }
        int a = ans[0];
        sort(ans.begin(), ans.end());
        for(int i = 0; i < 4; i++){
            if(ans[i] = a){
                cout << 3 - i << '\n';
                return 0;
            }
        }
    }

}