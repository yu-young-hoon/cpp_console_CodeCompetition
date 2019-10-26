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
#endif
	ll a, d, m; // a=g d~=b m
	ll g, p, b;
	cin >> a >> d >> m;
	cin >> g >> p >> b;
	if ((g-a) < 0) {
		cout << "NO";
		return 0;
	}
	if ((g-a) + p - d < 0) {
		cout << "NO";
		return 0;
	}

	if (g+p+b - (a+d+m) < 0) {
		cout << "NO";
		return 0;
	}
	cout << "YES";
	return 0;
}