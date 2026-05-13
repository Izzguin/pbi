#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string ss; cin >> ss;
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ss[i]){
            ans += '1';
        }else{
            ans += '0';
        }
    }
    cout << ans << endl;
}