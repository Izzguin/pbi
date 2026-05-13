#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    deque<char>ans;
    char awal; cin >> awal;
    ans.push_back(awal);
    for(int i = 1; i < n; i++){
        char x; cin >> x;
        if(x <= ans[0]){
            ans.push_front(x);
        }else{
            ans.push_back(x);
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i];
    }
    cout << '\n';
}