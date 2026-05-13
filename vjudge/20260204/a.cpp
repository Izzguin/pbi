#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<long long>freq(n+1, 0);
    for(int i = 1; i <= n; i++){
        long long x; cin >> x;
        freq[i] = freq[i-1] + x;
    }
    
    while(q--){
        int x, y; cin >> x >> y;
        cout << freq[y] - freq[x-1] << '\n';
    }
}