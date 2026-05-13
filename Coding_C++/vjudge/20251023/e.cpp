#include <iostream>
using namespace std;

int main(){
    string X;
    string Y;
    cin >> X >> Y;
    if (X == "Lynx"){
        cout << "YES";
    }
    else if((X == "Serval" && Y == "Lynx") || (X == "Ocelot" && Y == "Lynx")|| (X == "Ocelot" && Y == "Serval")){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
}