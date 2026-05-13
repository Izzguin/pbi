#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l; cin >> n >> l;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    double best = max(a[0], l - a[n-1]);

    for(int i = 0; i < n-1; i++){
        double temp = (a[i+1] - a[i])/2.0;
        best = max(best, temp);
    }
    cout << fixed << setprecision(10) << best << '\n';
}