#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix(4, vector<int>(4));
    int total_i = 0;
    set<int>ans;

    for(int i = 0; i < 4; i++){
        for(int j = 0;j < 4; j++){  // depan = baris, belakang sama dengan kolom
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                total_i++;
                ans.insert(i);
                ans.insert(j);
            }
        }
    }
    
    int totaledge = total_i /2;
    if((totaledge == 3) && (ans.size() == 4)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}