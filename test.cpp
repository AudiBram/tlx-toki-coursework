#include <cstdio>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(6);
	for (auto x : v) {
		cout << x << "\n";
	}
}