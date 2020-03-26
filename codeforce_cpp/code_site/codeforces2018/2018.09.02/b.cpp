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
	ll c, m;
	cin >> c >> m;
	multiset<ll> ins;
	for (ll i = 0; i < c; ++i) {
		ll aa;
		
		cin >> aa;
		ins.insert(aa);
	}
	ll ch = 0;
	while (true) {
		multiset<ll>::iterator it = ins.begin();
		for (ll i = 0; i < c / 2; ++i) {
			it++;
		}
		if (*it < m) {
			multiset<ll>::iterator it2 = --ins.lower_bound(m);
			while (true) {
				ch += m - *it2;
				if (it2 == it) {
					cout << ch;
					return 0;
				}
				--it2;
			}
		}
		else if (*it > m) {
			multiset<ll>::iterator it2 = ins.upper_bound(m);
			while (true) {
				ch += *it2 - m;
				if (it2 == it) {
					cout << ch;
					return 0;
				}
				++it2;
			}
		}
		else {
			cout << ch;
			return 0;
		}
	}
	

	return 0;
}