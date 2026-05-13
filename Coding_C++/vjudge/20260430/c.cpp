#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<int>warna;
vector<int>parent;

int awal = 0;
int akhir = 0;
int n, m;

bool DFS(int u){
    warna[u] = 2;
    for(auto v : adj[u]){
        if(warna[v] == 0){
            parent[v] = u;
            if(DFS(v)) return true;

        }else if((v != parent[u]) && (warna[v] == 2)){
            awal = v;
            akhir = u;
            return true;
        }
    }
    warna[u] = 1;
    return false;
}

int main(){
    cin >> n >> m;
    adj.resize(n+1);
    warna.resize(n+1, 0);
    parent.resize(n+1, 0);

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        if(warna[i] == 0){
           if(DFS(i)) break;
        }
    }

    if(awal == 0){
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int>jalan;
    int cur = akhir;
    while(cur != awal){
        jalan.push_back(cur);
        cur = parent[cur];
    }
    jalan.push_back(awal);
    jalan.push_back(akhir);

    cout << jalan.size() << '\n';
    for(int x : jalan){
        cout << x << " ";
    }
}
