#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ss ,sss; cin >> s >> ss >> sss;
    string ans = s + ss;
    sort(ans.begin(), ans.end());
    sort(sss.begin(), sss.end());

    for(int i = 0; i < max(ans.size(), sss.size()); i++){
        if(ans[i] != sss[i]){
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}