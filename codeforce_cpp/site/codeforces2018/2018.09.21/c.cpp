#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

const int maxv = 15e6 + 10;

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;
	
	ll a[maxv] = { 0 };
	ll pi[maxv] = { 0 };
	ll cnt[maxv] = { 0 };

	bitset <maxv> mark;

	ll gcd = 0, result;
	for (ll i = 0; i < c; ++i) {
		ll ins;
		cin >> ins;
		if (gcd == 0)
			gcd = ins;
		else
			gcd = __gcd(gcd, ins);
		a[i] = ins;
	}

	// 모두 같다면 실패
	bool flag = true;
	for (int i = 1; i < c; ++i)
		if (a[i] != a[i - 1])
			flag = false;
	if (flag)
		return cout << "-1", 0;


	for (int i = 0; i < c; ++i) {
		a[i] /= gcd;
		pi[a[i]]++;
	}

	result = c - 1;
	
	for (ll i = 2; i < maxv; ++i)
		if (!mark[i]) {
			for (ll j = i; j < maxv; j += i) {
				mark[j] = true;
				cnt[i] += pi[j];
			}
			result = min(result, c - cnt[i]);
		}

	cout << result;

	

	return 0;
}