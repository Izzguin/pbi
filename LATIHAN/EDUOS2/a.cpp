#include <bits/stdc++.h>
using namespace std;


int main(){
     double L, W, A; cin >> L >> W >> A;
     double luas = L * W;
     while (luas > A){
        luas /= 2.0;
     }
    if ( luas < A){
     cout << "TIDAK";
    }
    if ( luas == A){
        cout << "YA";
    }

}