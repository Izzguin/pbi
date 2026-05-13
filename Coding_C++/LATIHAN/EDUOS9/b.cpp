#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0;
    int j = 0;
    long long n, m, k; cin >> n >> m >> k; // input
    long long a[n];
    long long b[m];
    long long total = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    while ( i < n && j < m){
        if(b[j] < a[i] - k){
            j++;
        }
        else if(b[i] > a[i] + k){
            i++;
        }
        else{
            total++;
            i++;
            j++;
        }
    }
    cout << total;

}