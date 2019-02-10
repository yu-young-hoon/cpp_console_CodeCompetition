#ifdef WIN32
#include "..\\stdc++.h"
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
	ll h, w;
	cin >> h >> w;
	
	ll bl, bt, br, bb;
	char ins;

	bool first = true;
	for (ll i = 0; i < h; ++i) {
		for (ll j = 0; j < w; ++j) {
			cin >> ins;
			if (first && ins == 'B') {
				first = false;
				bl = i + 1;
				bt = j + 1;
			}
			if (ins == 'B') {
				first = false;
				br = i + 1;
				bb = j + 1;
			}
		}
	}

	cout << (bl + br) / 2 << " " << (bt + bb) / 2;

	return 0;
}