#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    vector<int> A(N);
    for(int i = 0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    if(M == N){
        cout << A[N-1] - A[0];
        return 0;
    }
    int ans = 0;
    int ansbest = (A[M-1] - A[0]);
    for(int i =0; i + M - 1 < N; i++){
        ans = (A[i + M -1] - A[i]);
        if(ans < ansbest){
            ansbest = ans;
        }
    }
    cout << ansbest << endl;
    return 0;
}