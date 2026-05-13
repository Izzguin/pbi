#include<bits/stdc++.h>
using namespace std;

    int n;
    vector<vector<int>>adj;
    vector<bool>visited;
    vector<int>dist;
    int tinggi;
    int pointers;


void BFS(int start){
    queue<int>q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
                tinggi = max(tinggi, dist[v]);
                if(tinggi == dist[v]){
                    pointers = v;
                }
            }
        }
    }

}

int main(){
    cin >> n;
    adj.resize(n+1);
    visited.resize(n+1, false);
    dist.resize(n+1);
    tinggi = 0;
    pointers = 0;


    int t = n-1;
    while(t--){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    BFS(1);

    fill(visited.begin(), visited.end(), false);
    fill(dist.begin(), dist.end(), 0);

    tinggi = 0;

    BFS(pointers);

    cout << tinggi;
}