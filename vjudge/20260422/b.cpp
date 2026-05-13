#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>>visited;
vector<vector<char>>grid;
int n, m;


bool DFS(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    if(visited[i][j] || grid[i][j] != '.') return false;

    visited[i][j] = true;   

            DFS(i+1, j);
            DFS(i, j+1);
            DFS(i-1, j);
            DFS(i, j-1);
            return true;
}

int main(){
    cin >> n >> m;
    visited.resize(n, vector<bool>(m, false));
    grid.resize(n, vector<char>(m));

    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
           cin >> grid[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans += DFS(i, j);
        }
    }

    cout << ans;
}