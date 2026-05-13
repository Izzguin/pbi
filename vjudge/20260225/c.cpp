#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y; cin >> x >> y;
    if(x == 2 && y == 18){
        cout << "Special";
    }else if(x == 1){
        cout << "Before";
    }else if(x == 2 && y < 18){
        cout << "Before";
    }else{
        cout << "After";
    }
}