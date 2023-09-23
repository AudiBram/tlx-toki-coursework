#include <iostream>

using namespace std;

int main() {
	int n, bilbul, x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> bilbul;
		if (i == 0) {
			x = bilbul;
			y = bilbul;
		} else {
			if (bilbul >= x) {
				x = bilbul;
			}
			if (bilbul <= y) {
				y = bilbul;
			}
		}
	}
	cout << x << " " << y << endl;
	return 0;
}