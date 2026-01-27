#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    for(int i = 0; i< N; i++){
         string S; cin >> S;
    int count = 0;
    for(char c : S){
        count++;
    }
    if(count > 10){
        int sementara = 0;
        for(int i = 1; i < S.size() - 1; i++){
            sementara++;
        }
        cout << S[0] << sementara << S[S.size() - 1] << endl;
    } else{
        cout << S << endl;
    }
    }
}