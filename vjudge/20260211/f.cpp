#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, A, B; cin >> M >> A >> B;
    int max = min(A, min(B, M));
    int min = 0;
    if((A % 2 == 1) && (B % 2 == 1) && ((B+A) == 2*M)){
        min = 1;
    }
    cout << min << " " << max;
}