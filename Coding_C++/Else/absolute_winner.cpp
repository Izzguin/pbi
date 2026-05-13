#include <iostream>
using namespace std;

int main(){
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    if ( A % 4 == 0 || B % 4 == 0 || C % 4 == 0){
        cout << "YA" << endl;
    }
    else {
        cout << "TIDAK" << endl;
    }
}