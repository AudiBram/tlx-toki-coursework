#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long t;
	cin >> t;
	long long num, flag = 0, count = 0;
	for (long long i = 0; i < t; i++) {
		flag = 0;
		count = 0;
		cin >> num;
		for (long long j = 2; j <= num / 2; j++) {
			if (count > 2) {
				flag = 1;
				break;
			}
			if (num % j == 0) {
				count++;
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