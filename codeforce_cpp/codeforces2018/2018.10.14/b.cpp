#ifdef WIN32
#include "..\\..\\stdc++.h"
#define oneCountByBit __popcnt
#else
#include <bits/stdc++.h>
#define oneCountByBit __builtin_popcount
#endif

#define fast ios_base::sync_with_stdio(false)

typedef long long ll;

using namespace std;

int main() {
	fast;
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;
	for (ll i = 0; i < c; ++i) {
		ll x;
		cin >> x;
		// one bit count
		ll oneBitCount = oneCountByBit(x);
		// shift by one bit count
		cout << (1LL << oneBitCount) << endl;
	}
	return 0;
}