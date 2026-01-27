#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    vector<long long> A(N), prefix(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        prefix[i] = A[i];
        if (i > 0) prefix[i] += prefix[i - 1];
    }

    while (K--) {
        long long B;
        cin >> B;

        int pos = upper_bound(prefix.begin(), prefix.end(), B) - prefix.begin();

        cout << pos << endl;
    }

    return 0;
}
