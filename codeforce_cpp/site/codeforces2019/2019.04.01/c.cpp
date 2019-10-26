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
#endif
	ll c;
	multiset<ll> a, d;
	cin >> c;
	for (ll i = 0; i < c; ++i) {
		ll input;
		cin >> input;
		if (a.find(input) != a.end() && d.find(input) != d.end() && i != 0) {
			cout << "NO";
			return 0;
		}
		if (d.find(input) == d.end()) {
			d.insert(input);
			continue;
		}
		a.insert(input);
	}
	cout << "YES"<< "\n";
	cout << a.size() <<"\n";

	for (multiset<ll>::iterator it = a.begin(); it != a.end(); ++it) {
		cout << *it << " ";
	}

	cout <<"\n" <<d.size() << "\n";

	for (multiset<ll>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it) {
		cout << *it << " ";
	}
	return 0;
}