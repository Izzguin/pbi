#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    string S, S2; cin >> S >> S2;

    int freq[3] = {0};
    int freq2[3] = {0};

    for(char c : S){
        if(c == 'G'){
            freq[0]++;
        }
        if(c == 'B'){
            freq[1]++;
        }
        if(c == 'K'){
            freq[2]++;
        }
    }
    for(char c : S2){
        if(c == 'G'){
            freq2[0]++;
        }
        if(c == 'B'){
            freq2[1]++;
        }
        if(c == 'K'){
            freq2[2]++;
        }
    }
    int ans = 0;
    ans += min(freq[0], freq2[2]);
    ans += min(freq[1], freq2[0]);
    ans += min(freq[2], freq2[1]);

    cout << ans << endl;


}