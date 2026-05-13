#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string tempa, tempb; cin >> tempa >> tempb;
    int total = 0;
    for(int i = 0; i < n; i++){
        if(tempa[i] == 'C' && tempb[i] == 'C'){
            total++;
        }
    }
     cout << total;
}