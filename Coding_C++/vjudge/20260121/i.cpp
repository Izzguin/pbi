#include <bits/stdc++.h>
using namespace std;

int madu[100001];
int n;

int binser(int target){
    int l = 0; int r = n;
    while(l < r){
        int mid = (l+r)/ 2;
        if(madu[mid] >= target){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    return l;
}
int binser2(int target){
    int l = 0; int r = n;
    while(l < r){
        int mid = (l+r)/ 2;
        if(madu[mid] > target){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return l;
}

int main(){
     cin >> n;
    for(int i = 0; i < n; i++){
        cin >> madu[i];
    }
    sort(madu, madu+n);

    int q; cin >> q;
    vector<int>l(q);
    vector<int>r(q);
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i];
    }    

    for(int i = 0; i < q; i++){
        int ans = binser2(r[i]) - binser(l[i]);
        cout << ans << '\n';
    }
}