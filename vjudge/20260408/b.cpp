#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll cross(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    ll cross_titik = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    return cross_titik;
    }

bool Onsegmen(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    return min(x1, x2) <= x3 && x3 <= max(x1, x2) && min(y1, y2) <= y3 && y3 <= max(y1, y2);
    }

bool diffSign(ll a, ll b){
    return (a > 0 && b < 0) || (a < 0 && b > 0);
    }

int main(){
    int t; cin >> t;
    while(t--){
        ll x1, y1, x2, y2, x3, y3, x4, y4; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        ll cross1 = cross(x1, y1, x2, y2, x3, y3);
        ll cross2 = cross(x1, y1, x2, y2, x4, y4);
        ll cross3 = cross(x3, y3, x4, y4, x1, y1);
        ll cross4 = cross(x3, y3, x4, y4, x2, y2);

    if((diffSign(cross1, cross2) && diffSign(cross3, cross4)) || (cross1 == 0 && Onsegmen(x1, y1, x2, y2, x3, y3)) || (cross2 == 0 && Onsegmen(x1, y1, x2, y2, x4, y4)) || (cross3 == 0 && Onsegmen(x3, y3, x4, y4, x1, y1)) || (cross4 == 0 && Onsegmen(x3, y3, x4, y4, x2, y2))){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << '\n';
    }
}
