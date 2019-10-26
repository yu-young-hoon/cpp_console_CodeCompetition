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
	ll n, t;
	cin >> n >> t;
	ll result = INT_MAX;
	ll resulti = 0;

	for (ll i = 0; i < n; ++i) {
		ll ti, r;
		cin >> ti >> r;
		if (ti == t) {
			cout << i + 1;
			return 0;
		}
		if (ti > t ) {
			if (ti < result) {
				resulti = i;
				result = ti;
			}
			continue;
		}


		if (((t-ti-1) / r+1) * r + ti < result) {
			resulti = i;
			result = ((t-ti-1) / r+1)* r + ti;
			continue;
		}
		/*pair<int, int> p = { 1e9, -1 };
		for (int i = 0; i<n; ++i) {
			cin >> s >> d;
			while (s<t) {
				s += d;
			}
			p = min(pair<int, int>(s, i), p);
		}*/

	}
	cout << resulti +1;

	return 0;
}