#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if((x+y) % 3 == 0){
            int nilai_maks = min(x, y) * 2;
            if(max(x, y) <= nilai_maks){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }else{
            cout << "NO" << '\n';
        }
    }
}