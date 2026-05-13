#include <iostream>

using namespace std;

int main() {
    int N, A[9], X;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    cin >> X;
    for (int i = 1; i <= N; i++) {
        if(A[i] == X){
            cout << i;
        }
    }
}