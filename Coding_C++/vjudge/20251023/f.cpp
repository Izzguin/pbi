#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[0] == S[1]){
        for (char c : S){
            if(c != S[0]){
                cout << c;
            }
         }
    }
    else if(S[0] == S[2]){
        cout << S[1];
    }
    else {
        cout << S[0];
    }
}