#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    char S[5][5];
    int A_ver;
    int B_hor;
    int C_ver;
    int D_hor;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> S[i][j];
        }
    }
    //identifikasi A dan B ada dimana
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(S[i][j] == 'A'){
                A_ver = i;
                B_hor = j;
            }
            if(S[i][j] == 'B'){
                C_ver = i;
                D_hor = j;
            }
        }
    }
    cout << max(abs(C_ver - A_ver), abs(D_hor - B_hor));
}
