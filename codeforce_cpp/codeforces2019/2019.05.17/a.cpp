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

char aa[26];

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
	ll m;
	cin >> m;
	ll result = 0;
	for (ll i = 0; i < m; ++i) {
		string a;
		cin >> a;
		aa[a[0]-'a']++;
		if ((aa[a[0] - 'a'] + 1) / 2 > 1) {
			result += (aa[a[0] - 'a']+1) / 2 - 1;
		}
	}
	cout << result;

	return 0;
}
