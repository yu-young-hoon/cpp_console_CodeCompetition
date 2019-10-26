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
	ll cc;
	cin >> cc;
	vector<ll> as;
	string result;
	ll rusultc = 0;
	for (ll i = 0; i < cc; ++i) {
		ll asd;
		cin >> asd;
		as.push_back(asd);
	}
	for (ll i = 0; i < cc - 1; ++i) {
		ll mins = cc + 1;
		ll minsnum = cc + 1;
		for (ll j = cc - 1; j > i; --j) {
			if (mins > as[j]) {
				mins = as[j];
				minsnum = j;
			}
		}
		if (as[i] > mins) {
			rusultc++;
			result += to_string(i + 1L);
			result += " ";
			result += to_string(minsnum + 1L);
			result+= "\n";
			as[minsnum] = as[i];
			as[i] = mins;
		}
	}
	
	cout << rusultc << '\n' << result;

	return 0;
}