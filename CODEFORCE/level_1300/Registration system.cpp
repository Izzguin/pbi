#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    unordered_map<string, int>mp;
    while(t--){
        string name; cin >> name;
        if(mp.find(name) == mp.end()){
            cout << "OK" << endl;
            mp[name] = 1;
        } else{
            string newname = name + to_string(mp[name]);
            cout << newname << endl;
            mp[name]++;
            mp[newname] = 1;
        }
    }
}