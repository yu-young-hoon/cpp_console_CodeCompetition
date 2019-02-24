#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll f = 0, t = 0;
	ll sugar;
	cin >> sugar;
	f = sugar / 5;

	while (1) {
		if (f * 5 + t * 3 == sugar) {
			cout << f + t;
			return 0;
		}
		else if (f * 5 + t * 3 > sugar) {
			f--;
		}
		else if (f * 5 + t * 3 < sugar) {
			t++;
		}

		if (f < 0) {
			cout << -1;
			return 0;
		}
	}

	return 0;
}