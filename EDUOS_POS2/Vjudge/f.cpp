#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    vector<string> patterns = {
        "OSN", "ONS", "SON", "SNO", "NOS", "NSO"
    };

    int ans = 0;

    for(string p : patterns){
        int idx = 0;
        int len = 0;

        for(char c : S){
            if(c == p[idx]){
                len++;
                idx++;
                if(idx == 3) idx = 0;
            }
        }

        if(len >= 3)
            ans = max(ans, len);
    }

    if(ans < 3) cout << -1;
    else cout << ans;
}
