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
	ll c;
	cin >> c;
	string input;
	for (ll i = 0; i < c; ++i) {
		input.clear();
		cin >> input;
		sort(input.begin(), input.end());
		reverse(input.begin(), input.end());
		bool result = true;
		for (ll j = 0; j < input.size() - 1 ; ++j) {
			if (input[j] != input[j + 1] + 1) {
				cout << "NO";
				result = false;
				break;
			}
		}
		if (result) {
			cout << "YES";
		}
		cout << "\n";
	}
	return 0;
}