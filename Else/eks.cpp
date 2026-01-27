#include <bits/stdc++.h>
using namespace std;


void pola(int n){
    if(n == 1){
        cout << '*' << endl;
        return;
    }else{
        pola(n-1);
        cout << string(n, '*') << endl;
        pola(n-1);
    }
}
int main(){
    int n; cin >> n;
    pola(n);
}