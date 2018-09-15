#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
	int aSize = arr.size();
	int l = 0, r = 0;
	for (int i = 0; i < aSize; ++i) {
		l += arr[i][i];
		r += arr[i][aSize - i - 1];
	}
	return abs(l - r);
}

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	int n;
	cin >> n;

	vector<vector<int>> arr(n);
	for (int i = 0; i < n; i++) {
		arr[i].resize(n);

		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = diagonalDifference(arr);

	assert(result == 15);

	return 0;
}