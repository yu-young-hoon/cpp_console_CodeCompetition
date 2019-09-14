#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
#include "..\\stdc++.h"
#endif
#ifdef __APPLE__
#include "../../stdc++.h"
#endif
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
	string n;
	int stick;
	multiset<int> ms;
	getline(cin, n);
	cin >> stick;
	pair <int, int > minz = { 10, 10 };

	for (string::iterator it = n.begin(); it != n.end(); ++it) {
		if (*it != ' ') {
			ms.insert(*it - '0');
		}
	}

	for (std::multiset<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
		multiset<int>::iterator findS = ms.find(stick - *it);
		if (findS != ms.end()) {
			minz = min(pair<int, int>(*it, *findS), minz);
		}
	}

	if (minz.first == 10) {
		cout << -1;
	}
	else {
		cout << minz.first << " " << minz.second;
	}
	return 0;
}