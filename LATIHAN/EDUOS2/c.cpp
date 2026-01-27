#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D; cin >> A >> B >> C >> D;
    if (C < A){
        cout << "No";
    }
    else if(C >= A && D >= B){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    

}