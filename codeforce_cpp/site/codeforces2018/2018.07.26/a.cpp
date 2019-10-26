#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	int total, use, beforUse = -1, merge = 0;
	string ch;
	
	cin >> total >> use;
	cin >> ch;

	sort(ch.begin(), ch.end(), [](const int& a, const int& b) {
		if (a < b)
			return true;
		else
			return false;
	});

	for (int i = 0; i < total; ++i) {
		if (beforUse + 1 >= ch[i])
			continue;
		use--;
		merge += ch[i] - 'a' + 1;
		beforUse = ch[i];
		if (use == 0) {
			cout << merge;
			return 0;
		}
	}
	cout << -1;

	return 0;
}