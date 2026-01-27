#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    for(int k = 0; k < 26; k++){
        cout << "k = " << k << ": ";
        for(char c : s){
            char asli = c-k;
            if(asli < 'a'){
                asli += 26;
            }
            cout << asli;
        }
        cout << endl;
    }
}