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
	ll start = 0;
	string result;
	for (ll i = 0; i < c; ++i) {
		ll input;
		cin >> input;
		if (i == 0) {
			start = input;
			continue;
		}
		 if (start != start + abs(input - start)) {
			result.append("1 ");
			result.append(to_string(i));
			result.append(" ");
			result.append(to_string(i+1));
			result.append("\n");
		}
		else if (input != input - abs(start - input)) {
			result.append("2 ");
			result.append(to_string(i+1));
			result.append(" ");
			result.append(to_string(i));
			result.append("\n");
		}
		start = input;
	}

	cout << result.size() / 6<< "\n";

	cout << result;

	return 0;
}
// TODO
// http://codeforces.com/contest/1144/problem/D