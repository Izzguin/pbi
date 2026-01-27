#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
     long long L[N];
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }
    long long terbesar = L[0];
    for (int i = 0; i < N; i++){
        if(L[i] > terbesar){
            terbesar = L[i];
        }
    }
    cout << terbesar << '\n';

}