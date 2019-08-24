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
	ll a, b, c;
	cin >> a >> b >> c;
	ll mins = min(a, b);
	ll maxs = max(a, b);
	ll result = c * 2;
	result += mins * 2;
	if (mins != maxs) {
		result++;
	}
	cout << result;
	
	return 0;
}