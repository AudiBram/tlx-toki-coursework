#include <iostream>
using namespace std;

int main() {
	int a, b, bagi, result;
	cin >> a >> b;
	bagi = a / b;
	result = a % b;

	printf("masing-masing %d\n", bagi);
	printf("bersisa %d\n", result);
}