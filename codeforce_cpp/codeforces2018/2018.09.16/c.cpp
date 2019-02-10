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
	cin >> n >> m >> d;
	vector<pair<ll, ll>> days; //휴식 원할때
	vector<ll> g(n);
	vector<ll> ans(n);
	
	for (ll i = 0; i < n; ++i) {
		ll ins;
		cin >> ins;
		days.push_back(pair<ll, ll>(ins, i));
	}
	sort(days.begin(), days.end());
	
	ll ng = 0;
	ll cg = 0;
	for (ll i = 0; i < n; i++)
	{
		if (i <= cg || 
			days[i].first - days[cg].first <= d)
		{
			g[i] = ng++;
		}
		else
		{
			g[i] = g[cg];
			cg++;
		}
	}

	for (ll i = 0; i < n; i++)
		ans[days[i].second] = g[i];

	cout << ng << endl; // 휴식 일수
	for (ll i = 0; i < n; i++)
	{
		if (i) cout << " ";
		cout << ans[i] + 1; // 해당하는 휴식이 일어나는 날
	}
	cout << endl;

	return 0;
}