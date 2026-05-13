#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        long long x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3; 
        double area = abs((x1 * y2 + x2 * y3 + x3 * y1) - ((y1 * x2) + (y2 * x3) + (y3 * x1)));
        area = area/2;
        cout << fixed << setprecision(2) << area << " ";

        double keliling = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)) + sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
        cout << fixed << setprecision(2) << keliling << '\n';
    }
}