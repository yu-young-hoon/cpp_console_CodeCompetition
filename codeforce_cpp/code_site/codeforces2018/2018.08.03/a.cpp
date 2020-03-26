#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif
#define XX 1000

using namespace std;

int main() {
	int m, c;
	cin >> m >> c;
	
	int in, book =0;
	for (int i = 0; i < m; ++i) {
		cin >> in;
		int p = 0;
		p = in / c;
		book += in % c;
		if (book >= c) {
			p++;
			book -= c;
		}
		cout << p << " ";
	}

	return 0;
}