#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M; cin >> N >> M;

    vector<int> kaki(N), sepatu(M);
    for(int i = 0; i < N; i++){
        cin >> kaki[i];
    }
    for(int i = 0; i < M; i++){
        cin >> sepatu[i];
    }

    sort(kaki.begin(), kaki.end());
    sort(sepatu.begin(), sepatu.end());

    int i = 0; int j = 0; int ans = 0;

    while(i < N && j < M){
        if(sepatu[j] < kaki[i]){
            j++;
        } else if(sepatu[j] > kaki[i] + 1){
            i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
            cout << ans << endl;

}