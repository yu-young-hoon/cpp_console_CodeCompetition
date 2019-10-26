#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

ll rects[4][132675];

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	multiset<ll> rect[4];
	ll c;
	cin >> c;
	ll d;
	for (ll i = 0; i < c; ++i) {
		for (ll j = 0; j < 4; ++j) {
			cin >> d;
			rects[j][i] = d;
			rect[j].insert(d);
		}
	}

	for (ll i = 0; i < c; ++i) {
		for (ll j = 0; j < 4; ++j) {
			ll dd = rects[j][i];
			rect[j].erase(rect[j].find(dd));
		}
		if (*rect[0].rbegin() <= *rect[2].begin() && 
			*rect[1].rbegin() <= *rect[3].begin()) {	// �Ʒ��� ���� ū���� ���� ���� ���� ������ ���ų� �۰�, 
														//������ ���� ū���� �������� ���� ���� ������ ���ų� ������ ����
			cout << *rect[0].rbegin() << " " << *rect[1].rbegin();
			return 0;
		}
		for (ll j = 0; j < 4; ++j) {
			d = rects[j][i];
			rect[j].insert(d);
		}
	}

	return 0;
}