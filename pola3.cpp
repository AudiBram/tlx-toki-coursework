#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int m;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < i; j++) {
            cout << n;
            n += 1;
            if (n == 10) {
                n = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}