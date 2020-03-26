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
	ll c;
	cin >> c;
	vector<ll> maxl[2];
	vector<ll> maxr[2];
	vector<ll> inv[2];
	ll result = 0;
	for (ll i = 0; i < c; ++i) {
		ll a, b;
		cin >> a >> b;
		inv[0].push_back(a);
		inv[1].push_back(b);
	}
	maxl[0].push_back(0LL);
	maxl[1].push_back(10e9);
	maxr[0].push_back(0LL);
	maxr[1].push_back(10e9);
	for (ll i = 0; i < c; ++i) {
		maxl[0].push_back(max(maxl[0][i], inv[0][i]));
		maxl[1].push_back(min(maxl[1][i], inv[1][i]));
		maxr[0].push_back(max(maxr[0][i], inv[0][c - 1 - i]));
		maxr[1].push_back(min(maxr[1][i], inv[1][c - 1 - i]));
	}

	for (ll i = 0; i < c; ++i) {
		ll a = max(maxl[0][i], maxr[0][c - i - 1]);
		ll b = min(maxl[1][i], maxr[1][c - i - 1]);
		result = max(result, b - a);
	}

	cout << result;

	return 0;
}