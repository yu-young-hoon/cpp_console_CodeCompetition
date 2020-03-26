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
	ll ccc;
	cin >> ccc;
	ll maxs = ccc;
	string aa;
	for (ll i = 0; i < ccc; ++i) {
		string ins;
		cin >> ins;
		aa.append(ins);
	}
	if (aa.find_first_of('1') == string::npos || aa.find_first_of('0') == string::npos) {

		return 1;
	}
	maxs = min(maxs, (ll)(aa.find_last_of('1'))+1);
	maxs = min(maxs, (ll)(aa.find_last_of('0'))+1);

	cout << maxs;
	
	return 0;
}