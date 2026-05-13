#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string S; cin >> S;
        for(char c : S){
            if(c == '+'){
                ans++;
                break;
            } else if(c == '-'){
                ans--;
                break;
            }
        }
    }
    cout << ans;
}