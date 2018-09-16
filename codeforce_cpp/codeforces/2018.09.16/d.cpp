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
	ll ins1, ins2;
	ll front = 0, result =0;
	for (ll j = 0; j < n; ++j) {
		front = 0;
		htemp = h;
		for (ll i = j; i < n; ++i) {
			if (i == j) {
				ins1 = s[i];
				ins2 = e[i];
				front += ins2 - ins1;
			}
			else {
				ins1 = s[i];
				htemp -= ins1 - ins2;
				front += ins1 - ins2;

				if (htemp >= 0) {
					ins2 = e[i];
					front += ins2 - ins1;
				}
				else {
					front += htemp;
					break;
				}
			}
		}
		if (htemp > 0)
			front += htemp;
		result = max(front, result);
	}

	for (ll j = 0; j < n; ++j) {
		front = 0;
		htemp = h;
		for (ll i = j; i < n; ++i) {
			if (i == j) {
				ins1 = s[n - i - 1];
				ins2 = e[n - i - 1];
				front += ins2 - ins1;
			}
			else {
				ins1 = e[n - i - 1];
				htemp -= ins1 - ins2;
				front += ins1 - ins2;

				if (htemp >= 0) {
					ins2 = s[n - i - 1];
					front += ins2 - ins1;
				}
				else {
					front += htemp;
					break;
				}
			}
		}
		if (htemp > 0)
			front += htemp;
		result = max(front, result);
	}

	cout << result;

	return 0;
}