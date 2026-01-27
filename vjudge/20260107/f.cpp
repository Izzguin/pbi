#include <bits/stdc++.h>
using namespace std;

int main(){
    long long K; cin >> K;
    if(K % 4 == 0){
        cout << K/4 << " " << 0 << endl;
    }
    else if( K % 4 == 1){
        cout << 0 << " " << -(K-1) / 4 << endl;
    }
    else if(K % 4 == 2){
        cout << -(K+2) / 4 << " " << 0 << endl;
    }
    else if(K % 4 == 3){
        cout << 0 << " " << (K-1) / 4 <<endl;
    }
}