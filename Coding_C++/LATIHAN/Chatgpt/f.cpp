#include <iostream>
using namespace std;

int main(){
    string kata; cin >> kata;
    int total = 0;
    for(char c : kata){
        if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'u') || (c == 'o') || (c == 'A') || (c == 'U') || (c == 'I') || (c == 'O') || (c == 'E')){
            total += 1;
        }
    }
    cout << total << endl;
}