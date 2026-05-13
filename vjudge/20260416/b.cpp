#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

ll Euclidean(pair<ll, ll>a , pair<ll, ll>b){
    ll temp = ((a.f - b.f) * (a.f - b.f) + (a.s - b.s) * (a.s - b.s));
    return temp;
}

int main(){
    int n; cin >> n;
    vector<pair<ll, ll>>c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i].f >> c[i].s;
    }

    ll biggest = LLONG_MAX;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n-1; j++){
            biggest = min(Euclidean(c[i], c[j]), biggest);
        }
    }
    cout << biggest << '\n';
}