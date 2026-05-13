#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>w(2*n);
    for(int i = 0; i < 2*n; i++){
        cin >> w[i];
    }
    vector<int>selisih;
    sort(w.begin(), w.end(), greater<int>());
    for(int i = 0; i < 2*n; i += 2){
        if(i+1 == n-1){
        selisih.push_back(w[i] - w[i+1]);
        }
    }
    sort(selisih.begin(), selisih.end(), greater<int>());
    int ans = 0;
    for(int i = 1; i < selisih.size(); i++){
        ans += selisih[i];
    }
    cout << ans << endl;
}