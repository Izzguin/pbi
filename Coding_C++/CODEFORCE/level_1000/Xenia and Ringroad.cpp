#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int>a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    int jarak = a[0] - 1;
    for(int i = 1; i < m; i++){
        if(a[i] > a[i-1]){
            jarak += a[i] - a[i-1];
        }else if(a[i] >= a[i-1]){
            continue;
        }else{
            jarak += n-a[i] + a[i]; 
        }
    }
}