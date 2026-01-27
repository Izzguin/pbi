#include <iostream>
using namespace std;

int main() {
    int P;
    int Q;
    cin >> P >> Q;
    int total = (P * P) + (Q * Q) + 1;
    if (total % 4 == 0){
        cout << total / 4 << endl;
    }
    else{
        cout << -1 << endl;
    }
}