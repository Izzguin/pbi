#include <iostream>
using namespace std;

int main() {
    int X = 0;
    int Y = 0;
    int Z = 0;
    cin >> X;
    cin >> Y;
    if (X > Y){
        Z += X-Y + X;
        cout << Z << endl;
    }
    else{
        Z += Y-X + Y;
        cout << Z << endl;
    }

}