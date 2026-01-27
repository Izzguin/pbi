#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    int longest = 0, current = 1;
    for ( int i = 1; i < s.size(); i++){
        if((s[i]) == s[i - 1]){
            current++;
        } else{
            if(longest < current){
                longest = current;
            }
            current = 1;
        }
    }
    if (longest < current) {
        longest = current;
    }
    cout << longest;
}