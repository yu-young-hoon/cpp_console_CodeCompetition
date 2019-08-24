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
	ll an, bn, at, bt, canclea;
	cin >> an >> bn >> at >> bt >> canclea;
	vector<ll> aa, bb;

	for (ll i = 0; i < an; ++i) {
		ll asdf;
		cin >> asdf;
		aa.push_back(asdf + at);
	}
	for (ll i = 0; i < bn; ++i) {
		ll asdf;
		cin >> asdf;
		bb.push_back(asdf);
	}
	ll result = -1;
	if (canclea >= an || canclea >= bn) {
		return cout << -1, 0;
	}
	ll lastSuccedd = 0;
	ll lastSucceddjj = 0;
	for (ll i = 0; i <= canclea; ++i) {
		bool aaf = true;
		ll sdfaa = lastSuccedd;
		for (ll j = 0; j <= canclea - i && sdfaa < bn; j) {
			if (bb[sdfaa] < aa[i]) {
				sdfaa++;
				lastSuccedd = sdfaa;
				continue;
			}
			result = max(result, bb[sdfaa] + bt);
			j++;
			sdfaa++;
			aaf = false;
		}
		if (aaf) {
			return cout << -1, 0;
		}
		if (bn - lastSuccedd + i - canclea <= 0) {
			return cout << -1, 0;
		}
	}
	return cout << result, 0;
}