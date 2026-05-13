#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    vector<int>ans(n);
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }
    sort(ans.begin(), ans.end());
    int l = 0; int r = n-1;
    int cnt = 0;
    while(l <= r){
        if(ans[l] + ans[r] <= x){
            cnt++;
            l++;
            r--;
        }else{
            r--;
            cnt++;
        }
    }
    cout << cnt << '\n';
}