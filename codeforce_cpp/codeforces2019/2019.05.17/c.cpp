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
	ll c;
	cin >> c;
	multiset<ll> v;
	ll result = 0;
	for (ll i = 0; i < c; ++i) {
		ll aa;
		cin >> aa;
		aa = abs(aa);
		if (v.size() >= 1) {
			multiset<ll>::iterator low = v.lower_bound(aa);
			multiset<ll>::iterator up = v.upper_bound(aa);
			
			for (low; low != v.end(); --low) {
				if (low == v.begin()) {
					break;
				}
				if (*low * 2 >= aa) {
					result++;
				}
			}

			for (up; up != v.end(); ++up) {
				if (*up <= aa * 2) {
					result++;
				}
			}
		}
		v.insert(aa);
	}

	cout << result;

	return 0;
}