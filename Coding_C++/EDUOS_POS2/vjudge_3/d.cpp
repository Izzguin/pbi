#include <bits/stdc++.h>
using namespace std;

int main(){
    int K; cin >> K;
    vector<pair<int, int>>p(K); //first cost, second kapasitas
    for(int i = 0; i < K; i++){
        int b;
        cin >> b;
         p[i].second = b;
    }
    for(int i = 0; i < K; i++){
        int b;
        cin >> b;
         p[i].first = b;
    }
    int N; cin >> N;
    vector<int>B(N);
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }

    sort(p.begin(), p.end());
    sort(B.begin(), B.end(), greater<int>());

    int idx = 0; // indeks bebek
    long long ans = 0;
    for(int i = 0; i < K && idx < N; i++){
        while(p[i].second > 0 && idx < N){
            ans += p[i].first * B[idx];
            idx++;
            p[i].second--;
        }
    }
    cout << ans << endl;
}
