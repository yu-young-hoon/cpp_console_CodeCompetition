#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	long long count;
	long long alen = 0;
	long long adds = 0;
	cin >> count;
	vector<long long> list;

	for (int i = 0; i < count; ++i) {
		int a;
		cin >> a;
		list.push_back(a);
	}

	if (list[0] == 1) {
		cout << 1;
		return 0;
	}

	while (true)
	{
		if (list[alen] - adds <= 0) {
			cout << alen + 1;
			return 0;
		}
		adds++;
		alen++;
		if (count <= alen) {
			alen = 0;
		}
	}

	return 0;
}