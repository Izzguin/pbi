#include <bits/stdc++.h>
using namespace std;

int main(){
    int X; cin >> X;
    int Y = 0;
    for(int i = 1; i < 200001; i++){
        Y += 5;
        if (Y >= X){
            cout << i;
            return 0;
        }
    }
}