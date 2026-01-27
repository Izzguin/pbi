#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k; cin >> k;
    int batas = 1;
    int level = 0;

    while(k > batas){
        level++;
        batas += level * 4;
    }
    int mid = batas - (level * 2); //2 + 6 + 10

    if(k <= mid){
    int jarak = (mid - k) / 2 + 1; // jarak
        if(k % 2 == 0){
            // kiri bawah
        cout << -1*jarak << " " << -level + jarak;
        } else{
            //kiri atas
            cout << -jarak + 1 << " " << level - jarak + 1;
        }
    } else if(k > mid){
        int mid2 = batas - level;
        int jarak = abs(mid2-k);

        if(k <= mid2){
            //kanan atas
            cout << level -jarak << " " << jarak << endl;;
        } else{
            //kanan bawah
            cout << level - jarak << " " << -jarak << endl;
        }
    }
}