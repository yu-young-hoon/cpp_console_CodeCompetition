#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;


int main() {
	ll a, b;
	cin >> a >> b;
	string as, bs;
	cin >> as >> bs;

	size_t starp = as.find("*");

	if (starp == string::npos) {
		if(bs.find(as) != string::npos && bs.size() == as.size())
			cout << "YES";
		else
			cout << "NO";
		return 0;
	}

	string aa = as.substr(0, starp);
	string bb = as.substr(starp + 1);

	if (bs.size() < aa.size() + bb.size()) {
		cout << "NO";
		return 0;
	}

	if (bs.substr(0, aa.size()).compare(aa) != 0) {
		cout << "NO";
		return 0;
	}

	if (bs.substr(bs.size()-bb.size(), bb.size()).compare(bb) != 0) {
		cout << "NO";
		return 0;
	}

	for (int i = aa.size(); i < bs.size() - bb.size(); ++i) {
		if (bs[i]<'a' || bs[i]>'z') {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}