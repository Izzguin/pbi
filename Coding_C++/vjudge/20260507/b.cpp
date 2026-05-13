#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, t; cin >> n >> t;
    vector<long long>k(n);

    for(int i = 0; i < n; i++){
        cin >> k[i];
    }

    long long l = 1;
    long long r = (*min_element(k.begin(), k.end())) * t;
    long long ans = r;

    while(l <= r){
        long long mid = (l+r)/2;

        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += mid/k[i];
            if(sum >= t)break; 
        }

        if(sum >= t){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans;
}