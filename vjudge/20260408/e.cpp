#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll shoelace(const vector<ll>& x, const vector<ll>& y){
    int n = x.size();
    ll ans = 0;

    for(int i = 0; i < n; i++){
        int j = (i + 1) % n;

        ans += x[i] * y[j];
        ans -= y[i] * x[j];
    }

    return abs(ans);
}

int main(){
    int n; cin >> n;
    vector<ll>x(n);
    vector<ll>y(n);
    for(int i = 0 ;i < n; i++){
        cin >> x[i] >> y[i];
    }
    cout << shoelace(x, y);

}