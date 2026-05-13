#include <iostream>
using namespace std;

//satu maj sama dengan A netim, format waktu = N maj dan M netim, 0 <= M < A; A X; batasan 1 < A,X <= 100, X netim = berapa N maj dan M netim


int main(){
int A;
int X;
cin >> A >> X;
int maj = X / A;
int netim = X % A;
cout << maj << " " << netim << endl;

    
}


