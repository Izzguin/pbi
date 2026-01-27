#include <iostream>
#include <string>
using namespace std;

int main(){
    int T; cin >> T;
    string X = "AI";
    for (int i = 0; i < T; i++){
        string S; cin >> S;
        if(S.find(X) != string::npos){
        cout << "YES" << endl;
        } else{
            cout << "NO" << endl;;
        }
    }
}