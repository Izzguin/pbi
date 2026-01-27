#include <bits/stdc++.h>
using namespace std;

int main(){
    string S; cin >> S;
    vector<int>freq(26);
    for(char c : S){
            freq[c - 'a']++;
        }
    int distinct = 0;
    for(int i = 0; i < 26;i++){
        if(freq[i] > 0) distinct++;
    }
    if(distinct % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
}
