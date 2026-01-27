#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if((x-1) % 3 == 0 || (x+1) % 3 == 0){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }
}