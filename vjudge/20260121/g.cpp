#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long k = (n*n + 1) / 2; //indeks median

    long long l = 1;
    long long r = n*n;
    long long ans = 0;
    while(l <= r){
        long long mid  = (l+r)/2, count = 0; // nilai median sementara
        for(long long i = 1; i <= n; i++){
            count += min(n, mid / i); //menhitung berapa banyak angka dibelakang mid
        }
        if(count >= k){
            r = mid-1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}