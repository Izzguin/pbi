#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int n; cin >>> n;
        if(n == 1){
            cout << "BUKAN" << endl;
            continue;
        }
        bool isprime = true;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
}