#include <iostream>
using namespace std;

int main() {
    int A;
    int X;
    cin >> A >> X;
    int maj = X / A;
    int netim = X % A;
    cout << maj << " " << netim << endl;
}