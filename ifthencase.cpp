#include <iostream>

using namespace std;

int n;

int main() {
	cin >> n;
	n <= 100000;
	if (n > 0 && n <= 9) {
		cout << "satuan";
	} else if (n >= 10 && n <= 99) {
		cout << "puluhan";
	} else if (n >= 100 && n <= 999) {
		cout << "ratusan";
	} else if (n >= 1000 && n <= 9999) {
		cout << "ribuan";
	} else if (n >= 10000 && n <= 99999) {
		cout << "puluhribuan";
	}
	return 0;
}