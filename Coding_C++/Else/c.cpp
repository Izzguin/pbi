#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int pola[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int counter = 0;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            cout << pola[counter];
            counter++;
            if(counter > 9){
                counter = 0;
            }
        }
    cout << endl;    
    }
}