#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll cross(pair<ll,ll> a, pair<ll,ll> b, pair<ll,ll> c){
    return (b.first - a.first)*(c.second - a.second)
         - (b.second - a.second)*(c.first - a.first);
}


int main(){
    int n; cin >> n;
    vector<pair<ll, ll>>c(n);

    for(int i = 0; i < n; i++){
        cin >> c[i].first >> c[i].second;
    }
    sort(c.begin(), c.end());

    vector<pair<ll,ll>> hull;

    for(auto p : c){
        while(hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), p) < 0){
            hull.pop_back();
        }
        hull.push_back(p);
    }

    hull.pop_back();

    int t = hull.size() + 1;
    for(int i = n-1; i >= 0; i--){
        while(hull.size() >= t && cross(hull[hull.size() - 2], hull.back(), c[i]) < 0){
            hull.pop_back();
        }
        hull.push_back(c[i]);
    }

    hull.pop_back();

    cout << hull.size() << '\n';
    for(auto p : hull){
        cout << p.first << " " << p.second << '\n';
    }
}