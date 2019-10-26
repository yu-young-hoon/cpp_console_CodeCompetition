#ifdef __APPLE__
#include "../../stdc++.h"
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
	ll x, y, c;
	ll rx= 0, ry= 0;
	cin >> c;

	for (ll i = 0 ; i < c*2 ; i++) {
		cin >> x >> y;
		rx += x;
		ry += y;
	}
	cout << rx/c << " " << ry/c;
	return 0;
}