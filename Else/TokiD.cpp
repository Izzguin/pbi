#include <iostream>
using namespace std;

int main() {
    int P;
    int Q;
    cin >> P >> Q;
    int total = (P * P + Q * Q) + 1;
    int hasil = total % 4;
    if(total % 4 == 0){
        cout << hasil << endl;
    }
    else {
        cout << -1 << endl;
    }
 return 0;
}