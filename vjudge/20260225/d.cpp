#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s = "";
    int max = 0;
    while(n--){
        string temp; cin >> temp;
        int tempint; cin >> tempint;
        if(tempint > max){
            s = temp;
            max = tempint;
        }
    }
    cout << s;
}