#include <iostream>
using namespace std;

int faktorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n*faktorial(n-1);
    }
}
int main(){
    cin >> n;
    cout << faktorial(n) << endl;
}