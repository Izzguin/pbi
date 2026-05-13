#include <bits/stdc++.h>
using namespace std;

int main(){
    string S; cin >> S;
    for( char c : S){
        if (c == S[S.length() - 1]){
            cout << c;
        }
        else {
            cout << c << " ";
        }
    }
}