#include <iostream>
using namespace std;

int main(){
    long long n;
    long long total = 0;
    cin >> n;
    int angka[n];
    for (int i = 0; i < n; i++){
        cin >> angka[i];
    }
    for (int i = 0; i < n-1; i++){
        if(angka[i + 1] >= angka[i]){
            continue;
        }
        else if (angka[i + 1] < angka[i]){
            total += angka[i] - angka[i + 1];
            angka[i + 1] = angka[i];
        }
    }
      cout << total;
}