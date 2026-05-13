#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K; cin >> N >> K;
    long long X = K;
    for(int i = 0; i < N-K; i++){
       X *= 2;
    }
    cout << X;
}