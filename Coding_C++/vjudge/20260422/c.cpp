#include <bits/stdc++.h>
using namespace std;

    int n, m;
    vector<vector<int>>adj;
    vector<bool>visited;

void DFS(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    cin >> n >> m;
    adj.resize(n+1);
    visited.assign(n+1, false);

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int>rep;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            rep.push_back(i);
            DFS(i);
        }
    }

    cout << rep.size() - 1 << '\n';
    for(int i = 1; i < rep.size(); i++){
        cout << rep[i-1] << " " << rep[i] << '\n';
    }

    return 0;
}