#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<long long, long long>ans;
    for(int i = 0; i < n; i++){
        long long keyx; cin >> keyx;
        long long keyy; cin >> keyy; 
        ans.insert({keyx, 1});
        ans.insert({keyy, -1});
    }
    long long mx = 0;
    long long temp = 0;
    for(auto& [_, delta] : ans){
        temp += delta;
        mx = max(temp, mx);
    }
    cout << mx;
}