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
	ll a, b;
	cin >> a >> b;

	ll ab = (a - 1) % (b);

	cout << (a - 1) + ab;

	return 0;
}

// TODO
// http://codeforces.com/contest/1113