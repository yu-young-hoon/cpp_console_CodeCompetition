#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;


int main() {
	ll n,h,a,b,k, count;
	ll a1, a2, b1, b2;
	cin >> n >> h >> a >> b >> k;
	for (int i = 0; i < k; ++i) {
		count = 0;
		cin >> a1 >> a2 >> b1 >> b2;
		ll m1 = abs(a2 - a);
		ll m2 = abs(a2 - b);
		if (a1 == b1) {
			count = abs(b2 - a2);
			cout << count << endl;
			continue;
		}
		if (a <= a2 && b >= a2) {
			count = abs(b1 - a1) + abs(a2 - b2);
		}
		else {
			count = min(m1 + abs(b1 - a1) + abs(a - b2), m2 + abs(b1 - a1) + abs(b - b2));
		}
		
		cout << count << endl;
		continue;
	}
	
	return 0;
}