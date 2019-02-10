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
	for (int i = 0; i < c; ++i) {
		ll l;
		string in;
		bool result = false;
		cin >> l >> in;

		for (int j = 0; j < l / 2; ++j) {
			if (abs(in[j] - in[l - j - 1]) >= 3 || abs(in[j] - in[l - j - 1])%2 != 0) {
				result = true;
				break;
			}
		}
		if (result)
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}

	return 0;
}