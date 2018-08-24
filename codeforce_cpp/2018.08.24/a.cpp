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
	ll l, r;
	cin >> l >> r;
	string s;
	cin >> s;
	string reculs = s;

	for (ll i = 0; i < l-1; ++i) {
		if (s.substr(s.length() - 1 - i, i + 1).compare(s.substr(0, i + 1)) == 0)
			reculs = s.substr(i+1, s.length() - 1 - i);
	}

	cout << s;
	for (ll i = 1; i < r; ++i) {
		cout << reculs;
	}

	return 0;
}