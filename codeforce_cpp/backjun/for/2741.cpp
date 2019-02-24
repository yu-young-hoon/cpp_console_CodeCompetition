#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll A, i = 0;
	cin >> A;
	while (A - i>0) {
		cout << i + 1 << "\n";
		i++;
	}

	return 0;
}