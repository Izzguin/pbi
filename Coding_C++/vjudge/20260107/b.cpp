#include <bits/stdc++.h>
using namespace std;

int main(){
    string N; cin >> N;
    for(char c : N){
        if(c == '0'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}