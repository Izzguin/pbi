#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int people[n] = {0};
    for(int i = 0;i < n; i++){
        cin >> people[i];
    }
    if(people[k-1] == 0){
        cout << 0 << endl;
        return 0;
    }
    int i = 0;
    while(people[k-1] == people[k+i]){
        i++;
    }
    cout << k+i << endl;
    return 0;
}