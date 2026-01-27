#include <iostream>

using namespace std;

int main() {
  int N, kuda_tercepat;
  float waktu_tercepat = 1000000001.0;

  cin >> N;
  for (int i = 1; i <= N; i++) {
    float V, D;
    cin >> V >> D;
    float waktu = D / V;
    if (waktu < waktu_tercepat) {
      waktu_tercepat = waktu;
      kuda_tercepat = i;
    }
  }
  cout << kuda_tercepat << endl;
}