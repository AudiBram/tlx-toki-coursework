#include <stdio.h>

int main() {
	int n, b, temp;
	scanf("%d", &n);
	temp = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &b);
		temp += b;
	}
	printf("%d", temp);
	return 0;
}