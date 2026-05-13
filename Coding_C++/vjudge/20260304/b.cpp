#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    while(n--){
        long long x, y; cin >> y >> x;
        long long level = max(y, x);
        long long ans = level - 1;
            ans *= ans;
        if(level % 2 == 0){
            if(level == y){
                ans += (level * 2) - min(x, y);
                cout << abs(ans) << '\n';
            }else{
                ans += min(x, y);
                cout << abs(ans) << '\n';
            }
        }else{
            if(level == y){
                ans += min(x, y);
                cout << abs(ans) << '\n';
            }else{
                ans += (level * 2) - min(x, y);
                cout << abs(ans) << '\n';
            }
        }
    }    
}