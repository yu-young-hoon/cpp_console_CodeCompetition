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
	ll c, inn, befor = -1, result = 0;
	cin >> c;
	multiset<ll> ms;
	for (int i = 0; i < c; ++i) {
		cin >> inn;
		ms.insert(inn);
	}

	for (auto i : ms) {
		if (befor == -1) {
			befor = i;
			continue;
		}
		if (befor + 1 != i)
			result += i - befor - 1;
		befor = i;
	}

	cout << result;

	return 0;
}