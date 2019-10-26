#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
#include "..\\..\\stdc++.h"
#endif
#ifdef __APPLE__
#include "../../stdc++.h"
#endif
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

ll xx[100];
ll yy[100];
ll zz[100][100];

int main() {
#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
	ifstream in("in.txt");
#endif
#ifdef __APPLE__
	ifstream in("../../in.txt");
#endif
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll x, y, z;
	cin >> x >> y >> z;

	for (ll i = 0; i < y; ++i) {
		cin >> xx[i];
	}

	for (ll i = 0; i < x; ++i) {
		cin >> yy[i];
	}

	for (ll i = 0; i < x; ++i) {
		for (ll j = 0; j < y; ++j) {
			cin >> zz[i][j];
			if (zz[i][j] == 1) {
				zz[i][j] = min(xx[j], yy[i]);
				cout << zz[i][j]<< " ";
			}
			else {
				cout << 0 << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}