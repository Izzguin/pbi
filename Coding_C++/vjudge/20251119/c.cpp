#include <bits/stdc++.h>
using namespace std;

int main(){
    char huruf[9];
    for(int i = 0; i < 9; i++){
        cin >> huruf[i];
    }
    for(int i = 0; i < 9; i++){
        if(huruf[i] != huruf[8-i]){
            cout << "NO" << endl;
            return 0;
         }
    }  cout << "YES" << endl;
} 
