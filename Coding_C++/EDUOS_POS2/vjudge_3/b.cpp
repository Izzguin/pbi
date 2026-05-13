#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;

    string warna; cin >> warna;

    vector<int>frekuensi(26), frekuensi_terbanyak;

    for( char c : warna ){
        frekuensi[c - 'A']++;
    }
    for(int i = 0; i < 26; i++){
        if(frekuensi[i] > 0){
            frekuensi_terbanyak.push_back(frekuensi[i]);
        }
    }
    sort(frekuensi_terbanyak.begin(), frekuensi_terbanyak.end(), greater<int>());

    if(frekuensi_terbanyak.size() < 3){
        cout << -1 << endl;
        return 0;
    }
    int ans = frekuensi_terbanyak[2] * 3;
    if(frekuensi_terbanyak[0] > frekuensi_terbanyak[2]){
        ans++;
    }
    if(frekuensi_terbanyak[1] > frekuensi_terbanyak[2]){
        ans++;
    }
    
    cout << ans << endl;
}    
