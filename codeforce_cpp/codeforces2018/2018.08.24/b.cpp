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
	ll c;
	cin >> c;

	ll result = 1;
	ll sumtemp = 1;
	ll temp =0;
	cin >> temp;
	for (ll i = 1; i < c; ++i) {
		ll ins;
		cin >> ins;
		if (ins <=  temp* 2)
			sumtemp++;
		else {
			result = max(result, sumtemp);
			sumtemp = 1;
		}
		temp = ins;
	}
	result = max(result, sumtemp);

	cout << result;

	return 0;
}