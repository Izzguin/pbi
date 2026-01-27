#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N; cin >> N;
    int A[N];
    int B[N];
    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        sumA += A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
        sumB += B[i];
    }
    cout << N * (sumA + sumB);
}
