#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    vector<int>ans;
   for(int i: x){
    auto it = lower_bound(ans.begin(), ans.end(), i);

    if(it == ans.end()){
        ans.push_back(i);
    }else{
        *it = i;
    }
   }
   cout << ans.size() << endl;
}