#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
#include "..\\stdc++.h"
#endif
#ifdef __APPLE__
#include "../stdc++.h"
#endif
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
	ll n = 500;
	ll m = 20;
	cout << n << endl;
	cout << m <<endl;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < m; ++i) {
		cout <<rand() % n + 1<< endl;
	}
	return 0;
}
