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
	ll a, b;
	cin >> a >> b;

	ll n = (a - 1);
	ll c = 1;
	ll s = 0;
	while (n>0) {
		if (n < b * 2) {
			s += c;
			c++;
			n--;
		}
		else {

			s += c*b;
			c += b;
			n -= b;
		}
	}
	cout << s;

	return 0;
}

// TODO
// http://codeforces.com/contest/1113