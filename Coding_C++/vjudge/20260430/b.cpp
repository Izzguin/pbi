#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<bool>visited;
vector<bool>warna;
int n, m;
bool bisa;

void BFS(int start){
    queue<int>q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();


        for(auto v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                warna[v] = !warna[u];
            } else if(warna[v] == warna[u]){
                bisa = false;
            }
        }
    }
}


int main(){
    cin >> n >> m;
    adj.resize(n+1);
    visited.resize(n+1, false);
    warna.resize(n+1, false);
    bisa = true;

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            BFS(i);
        }
    }

    if(bisa == true){
        for(int i = 1; i <= n; i++){
        int a = warna[i] + 1;
        cout << a << " ";
        }
    }else{
        cout << "IMPOSSIBLE";
    }
}