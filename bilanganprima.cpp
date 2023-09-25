#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long t;
	cin >> t;
	long long num, flag = 0;
	for (long long i = 0; i < t; i++) {
		flag = 0;
		cin >> num;
		if (num == 1 || num == 0) {
			cout << "BUKAN" << endl;
			continue;
		}
		for (long long j = 2; j <= sqrt(num); j++) {
			if (num % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << "YA" << endl;
		} else if (flag == 1) {
			cout << "BUKAN" << endl;
		}
	}
	return 0;
}