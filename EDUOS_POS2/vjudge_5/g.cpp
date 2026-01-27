#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int temAB = -1; int temBA = -1;
    for(int i = 0; i + 1 < s.size(); i++){
        if(s[i] == 'A' && s[i+1] == 'B' && temAB == -1){
            temAB = i;
        }
        if(s[i] == 'B' && s[i+1] == 'A' && temBA == -1){
            temBA = i;
        }
    }
    if(temAB != -1 && temBA != -1 && abs(temAB - temBA) >= 2){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}