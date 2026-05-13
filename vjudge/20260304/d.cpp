#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string ans;
    int kondisi = 0;
    for(int i = 0; i < n; i++){
       char x; cin >> x;
       if(x == '*'){
            kondisi += 1;
       }
       if(kondisi % 2 == 0){
        if(x != '*'){
            ans += x;
        }
       }
    }
    cout << ans;
}