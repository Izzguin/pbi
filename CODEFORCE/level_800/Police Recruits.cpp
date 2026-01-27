#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int total = 0;
    int polisi = 0;
    for(int i = 0; i < n; i++){
        int x;  cin >> x;
        if(x == -1){
            if(polisi > 0){
                polisi--;
            }else{
                total++;
            }
        }else{
            polisi += x;
        }
    }
    cout << total << '\n';
}