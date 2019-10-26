#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

ll vv[1001];
string vt[1001];
int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;
	multiset<ll> aa;
	multiset<ll> bb;
	multiset<ll> cc;
	for (ll i = 0; i < c; ++i) {
		cin >> vv[i];
		cin >> vt[i];
		sort(vt[i].begin(), vt[i].end());
		if (vt[i].end() != find(vt[i].begin(), vt[i].end(), 'A'))
			aa.insert(vv[i]);
		if (vt[i].end() != find(vt[i].begin(), vt[i].end(), 'B'))
			bb.insert(vv[i]);
		if (vt[i].end() != find(vt[i].begin(), vt[i].end(), 'C'))
			cc.insert(vv[i]);
	}
	ll result = 300004; // 최대값을 잘못 설정
	ll sums = 0;
	for (ll i = 0; i < c; ++i) {
		sums = vv[i];

		if (vt[i].end() == find(vt[i].begin(), vt[i].end(), 'A')) {
			if (aa.size() == 0)
				continue;
			sums += *aa.begin();
		}
		
		if (vt[i].end() == find(vt[i].begin(), vt[i].end(), 'B')) {
			if (cc.size() == 0)
				continue;
			sums += *bb.begin();
		}

		if (vt[i].end() == find(vt[i].begin(), vt[i].end(), 'C')) {
			if (cc.size() == 0)
				continue;
			sums += *cc.begin();
		}

		result = min(result, sums);
	}
	if (result != 300004)
		cout << result;
	else
		cout << -1;
	return 0;
}