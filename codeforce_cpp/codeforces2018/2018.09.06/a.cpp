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
	ll middel = -1;
	ll c, wp, bp;

	cin >> c >> wp >> bp;
	ll ins;
	vector<ll> mms;
	ll result = 0;
	for (ll i = 0; i < c; ++i) {
		cin >> ins;
		mms.push_back(ins);
	}

	for (ll i = 0; i < c/2; ++i) {
		if (mms[c - 1 - i] == mms[i]) {
			if (mms[i] == 2) {
				result += min(wp,bp)*2;
			}
		}
		if (min(mms[c - 1 - i], mms[i]) == 0 && max(mms[c - 1 - i], mms[i]) == 2) {
			result += wp;
		}
		if (min(mms[c - 1 - i], mms[i]) == 1 && max(mms[c - 1 - i], mms[i]) == 2) {
			result += bp;
		}
		if (min(mms[c - 1 - i], mms[i]) == 0 && max(mms[c - 1 - i], mms[i]) == 1) {
			cout << -1;
			return 0;
		}
	}

	if (c%2 == 1 && mms[c/2] == 2) {
		result += min(wp, bp);
	}

	cout << result;
	return 0;
}