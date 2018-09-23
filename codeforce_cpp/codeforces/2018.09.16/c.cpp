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
	ll n, m, d; // �޽�Ƚ��, �ٹ��� ����, �޽Ļ��� �ð�
	cin >> n >> m >> d;
	vector<pair<ll, ll>> days; //�޽� ���Ҷ�
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

	cout << ng << endl; // �޽� �ϼ�
	for (ll i = 0; i < n; i++)
	{
		if (i) cout << " ";
		cout << ans[i] + 1; // �ش��ϴ� �޽��� �Ͼ�� ��
	}
	cout << endl;

	return 0;
}