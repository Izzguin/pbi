#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<bool>s(n+1, false);
    for(int i = 0; i < n-1; i++){
        int temp; cin >> temp;
        s[temp] = true;
    }
    for(int i = 1; i < n+1; i++){
        if(s[i] == false){
            cout << i;
        }
    }
}