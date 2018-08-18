#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
	ll set, w,count =0;
	cin >> set >> w;

	if (set * 2 - 1 < w || w <= 2) {
		cout << 0;
		return 0;
	}

	if (set >= w)
		set = w -1;

	cout << (set - (w - set)) / 2 + w % 2;

	return 0;
}