#ifdef WIN32
#include "..\\..\\stdc++.h"
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
	ll result = 0;

	for (ll i = 0; i < c; ++i) {
		ll a, b;
		cin >> a >> b;
		result = max(result, a + b);
	}
	cout << result;

	return 0;
}