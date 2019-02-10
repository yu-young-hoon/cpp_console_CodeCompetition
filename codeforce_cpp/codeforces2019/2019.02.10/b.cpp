#ifdef __APPLE__
#include "../../stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;
ll rects[132675];
int main() {
#ifdef __APPLE__
	ifstream in("../../in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c, m, k;
	cin >> c >> m >> k;
	multiset<ll> num[c];
	for (ll i = 0 ; i < c ; ++i) {
		ll aa;
		cin >> aa;
		rects[i] = aa;
		num[i].insert(aa);
	}

	return 0;
}