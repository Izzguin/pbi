#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    int l = 0;
    int r = n-1;
    int sereja = 0;
    int dima = 0;

    for(int i = 0; i < n; i++){
        int temp;
        if(p[l] > p[r]){
            temp = p[l++];
        }else{
            temp = p[r--];
        }
        if(i % 2 == 0){
            sereja += temp;
        }else{
            dima += temp;
        }
    }
    cout << sereja << " " << dima << '\n';
}