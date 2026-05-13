#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int hitung = 1;
   while(n--){
    if(hitung > 3){
        hitung = 1;
    }
    if(hitung == 1){
        cout << 'a';
    }else if(hitung == 2){
        cout << 'b';
    }else{
        cout << 'c';
    }
    hitung++;
   }
}