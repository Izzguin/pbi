#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> ans;

    for(char c : s){
        if(c != '+'){
            ans.push_back(c);
        }
    }

    sort(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++){
        if(i != 0) cout << '+';
        cout << ans[i];
    }

    return 0;
}
