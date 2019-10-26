#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll a,b,c;
	cin >> a >> b >> c;
	vector<ll> m;
	m.push_back(a);
	m.push_back(b);
	m.push_back(c);
	sort(m.begin(), m.end());

	if (m[2] < m[1] + m[0])
		cout << 0;
	else
		cout << m[2] - (m[1] + m[0]) +1;

	return 0;
}