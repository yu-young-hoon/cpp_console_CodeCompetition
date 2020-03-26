#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
	//ios::sync_with_stdio(false);
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c, sum = 0;
	string input;
	cin >> c;
	cin >> input;
	for (ll i = 0; i < c; ++i) {
		sum += input[i] - '0';
	}
	cout << sum;

	return 0;
}