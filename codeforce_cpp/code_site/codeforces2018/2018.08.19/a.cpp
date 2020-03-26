#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

ll d[26];
int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	string s;
	cin >> c >> s;
	if (c == 1) {
		cout << "YES";
		return 0;
	}
	for (int i = 0; i < c; ++i) {
		if (d[s[i] - 'a'] == 1) {
			cout << "YES";
			return 0;
		}
		d[s[i] - 'a']++;
	}

	cout << "NO";
	return 0;
}