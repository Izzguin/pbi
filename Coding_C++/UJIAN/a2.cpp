#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = n * (n + 1) / 2;
    long long ans2 = 0;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        ans2 += x;
    }

    cout << ans - ans2;
}
