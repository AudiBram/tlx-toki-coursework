#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	while (n % 2 != 1) {
		n /= 2;
	}

	if (n == 1) {
		printf("ya\n");
	} else {
		printf("bukan\n");
	}
}