#include <iostream>

using namespace std;

int main() {
	int K, biggest_cake;
	float biggest_slice = 0;

	cin >> K;
	for (int i = 1; i <= K; i++) {
		float M, P;
		cin >> M >> P;
		float slice = M / P;
		if (biggest_slice < slice) {
			biggest_slice = slice;
            biggest_cake = i;
		}
	}
	cout << biggest_cake << endl;
	return 0;
}