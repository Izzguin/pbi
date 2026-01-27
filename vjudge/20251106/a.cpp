#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    int total = 0;
    for (char c : s){
        if(c == 'O'){
            total++;
        }
    }
    if(total != 1){
        cout << "Tidak";
    }
    else{
        cout << "Ya";
    }
}