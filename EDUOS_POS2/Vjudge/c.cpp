#include <bits/stdc++.h>
using namespace std;

int main(){
   int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
         cin >> a[i];
        }


        long long mx = a[n-1];
        long long ans = 0;

        for (int k = 2; k < n; k++) {
            int i = 0, j = k - 1;

            while (i < j) {
                if (a[i] + a[j] > a[k] &&
                    a[i] + a[j] + a[k] > mx) {
                    ans += (j - i);
                    j--;
                } else {
                    i++;
                }
            }
        }

        cout << ans << endl;
    }
}
