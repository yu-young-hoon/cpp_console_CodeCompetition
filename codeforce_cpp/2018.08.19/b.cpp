#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;
ll ins[150000][2];
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
		ins[i][0] = a;
		ins[i][1] = b;
		result = __gcd(result, a*b);
	}
	if (result == 1) {
		cout << "-1";
		return 0;
	}
	for (ll i = 0; i < c; ++i) {
		int resultT = __gcd(result, ins[i][0]);
		if (resultT > 1) {
			result = resultT;
		}
		resultT = __gcd(result, ins[i][1]);
		if (resultT > 1) {
			result = resultT;
		}
	}

	cout << result;
	return 0;
}