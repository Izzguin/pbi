#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        long long y, x; cin >> y >> x;
        long long level = max(y, x);
        long long mid = (level * level) - level + 1;
        long long a = y-x;
        if(level % 2 == 0){
            cout << mid + a << '\n';
        }else{
            cout << mid -a << '\n';
        }   
    }
}