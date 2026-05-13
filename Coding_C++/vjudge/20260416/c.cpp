#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

int main(){
    int n; cin >> n;
    ll maxsum = LLONG_MIN;
    ll maxdiff = LLONG_MIN;
    ll minsum = LLONG_MAX;
    ll mindiff = LLONG_MAX;

    for(int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;

        ll sum = x+y;
        ll diff = x-y;

        maxsum = max(sum, maxsum);
        maxdiff = max(diff, maxdiff);
        minsum = min(sum, minsum);
        mindiff = min(diff, mindiff);

        cout << max(maxsum - minsum, maxdiff - mindiff) << '\n';

    }
}