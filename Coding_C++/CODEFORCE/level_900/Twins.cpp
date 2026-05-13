#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int total = 0;
    int cnt = 0;
    int mysum = 0;
    for( int x : a){
        total += x;
    }
    sort(a.begin(), a.end(),greater<int>());
    for(int i = 0; i < n; i++){
        mysum += a[i];
        total -= a[i];
        cnt++;
        if(mysum > total){
            break;
        }
    }
    cout << cnt << endl;
}