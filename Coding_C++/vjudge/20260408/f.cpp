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

int main(){
    int n, m; cin >> n >> m;
    vector<ll>tiangx(n);
    vector<ll>tiangy(n);
    vector<ll>sarangx(m);
    vector<ll>sarangy(m);


    for(int i = 0; i < n; i++){
        cin >> tiangx[i] >> tiangy[i];
    }
    for(int i = 0; i < m; i++){
        cin >> sarangx[i] >> sarangy[i];
    }



    for(int i = 0 ; i < m; i++){
        bool pos = false, neg = false, boundary = false;
        for(int j = 0; j < n; j++){
            int cnt = (j + 1) % n;
            ll c= cross(tiangx[j], tiangy[j], tiangx[cnt], tiangy[cnt], sarangx[i], sarangy[i]);

            if(c > 0){
                pos = true;
            }
            if(c < 0){
                neg = true;
            }
            if(c == 0 && Onsegmen(tiangx[j], tiangy[j], tiangx[cnt], tiangy[cnt], sarangx[i], sarangy[i])){
            boundary = true;
            break;
            }
        }
        if(boundary){
            cout << "BOUNDARY"; 
        }else if(pos && neg){
            cout << "OUTSIDE";
        }else{
            cout << "INSIDE";
        }
        cout << '\n';
    }

}