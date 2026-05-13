#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n){
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    if(n % 2 == 0){
        return 0;
    }
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    while(n--){
        long long x; cin >> x;
        long long y = sqrt(x);
        if(y * y == x && isprime(y)){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
}