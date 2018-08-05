#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif
#include <iostream>
using namespace std;

int main() {
	int sl, tl, c;
	string s, t;
	cin >> sl >> tl >> c;
	cin >> s >> t;
	int sp, ep;
	vector<int> vvv(sl);
	for (int j = 0; j < sl - tl + 1; ++j) {
		int eee = s.find(t, j);
		if (eee != -1) {
			vvv[eee] = 1;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < c; ++i) {
		cin >> sp >> ep;
		int count = 0;
		int endpp = ep - t.size() + 1;

		for (int j = sp-1; j < endpp; ++j) {
			if (vvv[j] == 1)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}