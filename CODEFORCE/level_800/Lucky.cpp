#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int temp1 = 0;
        int temp2 = 0;
        for(int i = 0; i < 6; i++){
            if( i < 3){
                temp1 += s[i] - '0';
            }else{
                temp2 += s[i] - '0';
            }
        }
        if(temp1 == temp2){
            cout << "YES" << '\n';
        }else{
            cout << "NO\n";
        }
    }
}