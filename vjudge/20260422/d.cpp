#include<bits/stdc++.h>
using namespace std;

    int n, m;
    vector<vector<int>>adj;
    vector<bool>visited;
    vector<int>p;

void BFS(int start){
    queue<int>q;
    q.push(start);
    visited[start] = true;
    p[start] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(auto v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                p[v] = u;
                q.push(v);
            }
        }
    }

}

int main(){
    cin >> n >> m;

    adj.resize(n+1);
    visited.assign(n+1, false);
    p.resize(n+1);

    vector<int>ans;
    int itungan = 1;
   while((n-1)--){
    int a; cin >> a;
    adj[a].push_back(itungan);
    itungan++;
   }

    BFS(1);

    if(!visited[n]){
        cout << "IMPOSSIBLE";
        return 0;
    }

    int cur = n;

    while(cur != 0){
        ans.push_back(cur);
        cur = p[cur];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(int x : ans){
        cout << x << " ";
    }
}