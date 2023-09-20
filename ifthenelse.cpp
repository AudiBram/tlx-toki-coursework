#include <iostream>

using namespace std;

int n;

int main() {
	cin >> n;
	n <= 100000 && n >= 100000;
	if (n > 0) {
		cout << "positif";
	} else if (n < 0) {
		cout << "negatif";
	} else {
		cout << "nol";
	};
}