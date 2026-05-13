#include <bits/stdc++.h>
using namespace std;

int main(){
    int titik[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> titik[i][j];
            if(titik[i][j] == 1){
                cout << abs(i - 2) + abs(j-2);
                return 0;
            }
        }
    }
}