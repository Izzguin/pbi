#include<bits/stdc++.h>
using namespace std;

int main(){
    int memoint = 0;
    string memostring = "";
    string s;

    while(cin >> s && s != "99999"){
        int temp = stoi(s.substr(0, 2));
        int digit = stoi(s.substr(2, 3));
        int ans = (temp % 10) + (temp / 10);
        if(ans == 0){
            cout << memostring << " " << digit << '\n';

        }else if(ans % 2 == 0){
            cout << "right" << " " << digit << '\n';
            memoint = digit;
            memostring = "right";
        }
        else{
            cout << "left" << " " << digit << '\n';
            memoint = digit;
            memostring = "left";
        }
    }
}