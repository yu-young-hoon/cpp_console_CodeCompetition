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
	ll c;
	cin >> c;
	for (ll i = 0; i < c; ++i) {
		ll money, freeforbuy, freebarnum, barprice;
		cin >> money >> freeforbuy >> freebarnum >> barprice;
		cout << ((money / barprice) / freeforbuy) * freebarnum + money / barprice << endl;
	}
	return 0;
}