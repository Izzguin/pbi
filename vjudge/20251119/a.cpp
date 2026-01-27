#include <iostream>
using namespace std;

int main(){
    int W; cin >> W;
    if(W % 2 != 0 || W == 2){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }
}