#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    if(s[0] >= 'a'){
        s[0] = s[0] - 32;
    }
    cout << s;
}

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
}       kode lebih simpelnya seperti ini */