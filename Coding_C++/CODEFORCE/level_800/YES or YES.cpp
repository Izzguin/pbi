#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        bool aman = true;
        for(char c : s){
            c = tolower(c);
            if(c != 'y' && c != 'e' && c != 's'){
                cout << "NO" << '\n';
                aman = false;
                break;
            }
        }
        if(aman){
            cout << "YES" << '\n';
        }
    }
}