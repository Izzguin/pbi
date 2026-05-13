#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;

    for(int i = 0; i < S.length(); i++){
        if(i == S.length() - 1){
            cout << S[i];
        }
        else {
          cout << S[i] << " ";
        }
    }
}