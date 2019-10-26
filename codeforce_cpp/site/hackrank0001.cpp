#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

ll aVeryBigSum(vector<ll> ar) {
	ll sum = 0;
	for (long a : ar) {
		sum += a;
	}
	return sum;
}

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll ar_count, ar_item;
	cin >> ar_count;

	vector<ll> ar(ar_count);

	for (int i = 0; i < ar_count; i++) {
		
		cin >> ar_item;
		ar.push_back(ar_item);
	}

	ll result = aVeryBigSum(ar);

	assert(result==5000000015);

	return 0;
}