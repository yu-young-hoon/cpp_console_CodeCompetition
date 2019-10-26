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
	ll n, h, htemp;
	cin >> n >> h;
	vector<ll> s;
	vector<ll> e;

	ll ins;
	for (ll i = 0; i < n; ++i) {
		cin >> ins;
		s.push_back(ins);
		cin >> ins;
		e.push_back(ins);
	}
	s.push_back(999999);

	ll downV = 0;
	ll sumV = 0;
	ll pivot = 1;
	ll result = 0;
	for (ll i = 0; i < n; ++i) {
		ll tdownV = downV + s[i+1] - e[i];
		ll tsumV = sumV + e[i+1] - s[i+1];;
		while (s[pivot] - e[pivot - 1] + downV < h) {
			downV += s[pivot] - e[pivot - 1];
			sumV += e[pivot] - s[pivot];
			pivot++;
		}
		result = max(sumV + h, result);

		downV -= tdownV;
		sumV -= tsumV;
	}

	cout << result;

	return 0;
}