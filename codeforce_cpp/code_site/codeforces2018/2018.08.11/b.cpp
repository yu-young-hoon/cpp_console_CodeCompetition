#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;
ll in[1001];
bool out[1001];
using namespace std;
int main() {
	ll c, result;

	cin >> c;

	for (ll i = 0; i < c; ++i) {
		cin >> in[i];
	}

	for (ll i = 0; i < c; ++i) {
		memset(out, 0, 1001);
		int result = i;
		while (true) {
			if (out[result]) {
				break;
			}
			out[result] = 1;
			result = in[result]-1;
		}
		cout << result + 1 << endl;
	}
	
	return 0;
}