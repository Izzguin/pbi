#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<long long> B(N);
    for (int i = 0; i < N; i++) cin >> B[i];

    vector<long long> lis;

    for (long long x : B) {
        auto it = lower_bound(lis.begin(), lis.end(), x);
        if (it == lis.end()) {
            lis.push_back(x);
        } else {
            *it = x;
        }
    }

    cout << lis.size() << "\n";
}
