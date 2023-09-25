#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    int arr[105];
    while (cin >> arr[i]) {
        i++;
    }

    for (int n = i - 1; n >= 0; n--) {
        cout << arr[n] << endl;
    }
    return 0;
}