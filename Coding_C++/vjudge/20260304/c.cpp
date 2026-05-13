#include <cstdio>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    int ans = 0;
   while(n--){
    int x; scanf("%d", &x);
    ans ^= x;
   }
   printf("%d\n", ans);
}