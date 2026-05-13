#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int>a(n);
    vector<int>b(k);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    vector<int>jarak(n);
    jarak[0] = a[0];
    for(int i = 1; i < n; i++){
        jarak[i] = jarak[i-1] + a[i];
    }
   
    for(int i = 0; i < k; i++){
        int stamina = b[i];
        int l = 0; int r = n-1;
        int ans = 0;

        while(l <= r){
            int mid = (l+r)/2;
            if(jarak[mid] <= stamina){
                ans = mid + 1;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    
}