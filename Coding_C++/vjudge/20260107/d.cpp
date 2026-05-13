#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int X, Y;
    for(int i = 1; i <= T; i++){
        cin >> X >> Y;
        cout << "Case #" << i << ": ";
        if(Y<X || (Y-X) % 12 != 0){
            cout << "impossible" << endl;
        } else{ 
            int semen = (Y-X) / 12;
            cout << semen * 7 + X << endl;
            }

    }
}