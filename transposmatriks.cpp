#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int matriks[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matriks[i][j];
		}
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriks[j][i] << " ";
		}
		cout << endl;
	}
}