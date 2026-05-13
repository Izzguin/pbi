#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, C; cin >> R >> C;
    vector<string>s(R);
    for(int i = 0; i < R; i++){ //input peta
            cin >> s[i];
        }
    while(true){
        bool adahapus = false;
        int last = -1;
        for(int i = 0; i < R; i++){
            bool penuh = true;
            for(char ch : s[i]){
                if(ch == '0'){
                penuh = false;
                break;
                }                               //mengganti baris yang penuh 1 dengan 0
            }
            if(penuh == true){
                s[i].assign(s[i].size(), '0');
                adahapus = true;
                last = max(last, i); //indeks terakhir dimana gravitasi berlaku(kebawahnnya engga)
            }
        }

        if(last == -1 || last == 0){
            for(int i = 0;  i < R;i++){
                cout << s[i] << endl;
            }
            return 0;
        }

        if(!adahapus){
            break;
        }
        for(int j = 0; j < C; j++){
            int cnt = 0;
            int dasar = R-1; //tapi jika di bawah last ada nol, maka reruntuhan tetap akan ke sana
            for(int i = 0; i < last; i++){
                if(s[i][j] == '1'){
                    cnt++; //hitung semua 1 yang tersisa
                    s[i][j] = '0';
                }
            }
            for(int i = last; i <= R-1; i++){
                if(s[i][j] == '1'){
                        dasar = i;   //mencari dasar
                        break;
                    }
                }
            for(int i = dasar-1; i >= 0 && cnt > 0; i--){
                s[i][j] = '1';   //reruntuhan
                cnt--;
            }
        }

    }
    for(int i = 0;  i < R;i++){
        cout << s[i] << endl;
    }
}