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
	ll a, b, x, y;
	cin >> a >> b >> x >> y;

	ll gcd = __gcd(x, y);
	
	x /= gcd;
	y /= gcd;

	ll result = min(a / x, b / y);
	
	cout << result;

	return 0;
}