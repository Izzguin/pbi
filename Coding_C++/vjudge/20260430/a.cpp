#include<bits/stdc++.h>
using namespace std;

    int n;
    vector<vector<int>>adj;
    vector<int>totaladj;

void DFS(int u){
    totaladj[u] = 1;

    for(auto v : adj[u]){
            DFS(v);
            totaladj[u] += totaladj[v];

        }
}


int main(){
    cin >> n;

    adj.resize(n+1);
    totaladj.resize(n+1);
    int t = n-1;

    int itungan = 2;
   while(t--){
    int a; cin >> a;
    adj[a].push_back(itungan);
    itungan++;
   }

    DFS(1);

    for(int i = 1; i <= n; i++){
        cout << totaladj[i] - 1 << " ";
    }
}