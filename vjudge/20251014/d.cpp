#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long angka[n];
    for ( long long i = 0; i < n-1; i++){
        cin >> angka[i];
    }
    bool sudah[n + 1];
    for (int i = 1; i <= n; i++){
        sudah[i] = false;
    }
    for (long long i = 0; i < n-1; i++){
        sudah[angka[i]] = true;
    }
    for ( int i = 1; i <= n; i++){
        if ( sudah[i] == false){
            cout << i;
        }
    }
}