#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    int M = sqrt(N);
    if(M * M == N){
        cout << M;
    }
    else{
        cout << 0;
    }
}

