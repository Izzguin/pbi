#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; 
    long long M; 
    cin >> N >> M;
    vector<long long>a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    } 
    long long left = 0;
    long long right = *max_element(a.begin(), a.end());

    long long answer = -1;
    while(left <= right){
        long long total = 0;
        long long mid = (left + right) / 2;
        for(int i = 0; i < N; i++){
            if(a[i] > mid){
                total += a[i] - mid;
            }

        }
        if(total >= M){
            answer = mid;
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    cout << answer << endl;
}