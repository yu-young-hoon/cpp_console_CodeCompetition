#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;


int main() {
	ll count, jon, rank = 1;
	int a, b, c, d;
	cin >> count;
	cin >> a >> b >> c >> d;
	jon = a + b + c + d;
	for (int i = 0; i < count -1; ++i) {
		cin >> a >> b >> c >> d;
		if (a + b + c + d > jon)
			rank= rank + 1;
	}
	cout << rank;
	return 0;
}