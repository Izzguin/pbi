#include <iostream>
using namespace std;

int main(){
    int N;
    long long M;
    cin >> N >> M;

     long long L[N];
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }
    int Nomor_kandang = -1;
    long long luas_maksimum = -1;
    for(int i=0; i < N; i++){
        if(M < L[i]){
            continue;
        }
        if(luas_maksimum < L[i]){
            luas_maksimum = L[i];
            Nomor_kandang = i;
        }
    }
    if(luas_maksimum < 0){
        cout << -1 << endl;
    }
    else{
        cout << Nomor_kandang + 1 << " " << luas_maksimum << endl;
    }
}