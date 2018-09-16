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
	ll n, m, d; // 휴식횟수, 근무일 길이, 휴식사이 시간
	ll c;
	vector<ll> days; //휴식 원할때
	cin >> n >> m >> d;
	ll ins;

	for (ll i = 0; i < m; ++i) {
		cin >> ins;
		days.insert(ins);
	}
	
		return 0;
}