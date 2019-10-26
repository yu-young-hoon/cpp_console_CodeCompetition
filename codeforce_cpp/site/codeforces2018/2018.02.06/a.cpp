#include <iostream>

using namespace std;
int main() {
	int t, a, b;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;

		cout << ((a*a > b*b * 2) ? "1" : "2") << ((i != t) ? "\n" : "");
	}

	return 0;
}