#include <bits/stdc++.h>
using namespace std;

bool lucky(int n){
    int luckynumber[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i = 0; i < 14; i++){
        if(n % luckynumber[i] == 0){
            return true;
        }
    }
    return false;

}


int main(){
    int n; cin >> n;
    string ns = to_string(n);
    int cnt = 0;
    for(char c : ns){
        if(c == '7' || c == '4'){
            cnt++;
        }
    }
    if(cnt == ns.size()){
        cout << "YES" << endl;
    }else if(lucky(n)){
        cout << "YES" << endl;
    }else{
        cout << "NO"<< endl;
    }
}