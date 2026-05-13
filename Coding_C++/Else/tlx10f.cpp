#include <iostream>
using namespace std;

int main() {
    long N;
    cin >> N;

    long long int jumlah = 0;
    for (long i = 1; i <= N; i++) {
        int x;
        cin >> x;
        jumlah += x;
        cout << "saat i = " << i << ", jumlah sementara = " << jumlah << endl;

    }

    cout << jumlah << endl;
}