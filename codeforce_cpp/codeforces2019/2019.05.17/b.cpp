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
	ll s;
	cin >> s;
	if (s < 25) {
		return cout << -1 ,0;
	}
	char cc[5];
	cc[0] = 'a';
	cc[1] = 'e';
	cc[2] = 'i';
	cc[3] = 'o';
	cc[4] = 'u';

	for (ll i = 5; i < s; ++i) {
		if (s%i == 0 && s/i >= 5) {
			for (ll j = 0; j < i; ++j) {
				for (ll l = 0; l < s/i; ++l) {
					cout << cc[(l+j) % 5];
				}
			}
			return 0;
		}
	}

	return cout << -1, 0;
}