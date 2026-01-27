#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int freqke = 0;
    int freqbe = 0;
    string ans = "";
    for(char c : s){
        if(c >= 95){ //ngitung yang kecil
            freqke++;
        } else{
            freqbe++;
        }
    }
    if(freqbe > freqke){
        for(char c : s){
            c = toupper(c);
            ans += c;
        }
    }
    if(freqke > freqbe){
        for(char c : s){
            c = tolower(c);
            ans += c;
        }
    }
    if(freqbe == freqke){
        for(char c : s){
            c = tolower(c);
            ans += c;
        }
    }
    cout << ans << endl;
}

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int lower = 0, upper = 0;

    for(char c : s){
        if(islower(c)) lower++;
        else upper++;
    }

    if(lower >= upper){
        for(char &c : s){
            c = tolower(c);
        }
    } else{
        for(char &c : s){
            c = toupper(c);
        }
    }

    cout << s << endl;
    return 0;
}
*/