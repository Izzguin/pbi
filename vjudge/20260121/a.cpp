#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>ans = {1, 2, 3};
    string s; cin >> s;
    for(char c : s){
        if(c == 'A'){
            swap(ans[0], ans[1]);
        } else if(c == 'B'){
            swap(ans[1], ans[2]);
        }else{
            swap(ans[0], ans[2]);
        }
    }
    for(int i = 0; i < 3; i++){
        if(ans[i] == 1){
            cout << i+1 << '\n';
        }
    }
}