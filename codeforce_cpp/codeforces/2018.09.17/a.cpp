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
	ll c, b;
	cin >> c >> b;
	ll ins;
	multiset<ll> ms;
	for (ll i = 0; i < c; ++i) {
		cin >> ins;
		ms.insert(ins);
	}
	multiset<ll>::iterator ite = ms.end();
	ll upper = *(--ite) + b;

	ll sum = 0;
	for (std::multiset<ll>::iterator it = ms.begin(); it != ms.end(); ++it)
		sum += *(ite) - *it;
	
	ll low = *(ite) + (b - sum) / c + ((b - sum) % c == 0 ? 0 : 1);
	if (sum > b) // �߰��Ǵ� ����� �ִ밪�� �ø��� �ʰ� ä�� ������ �������� ����
		low = *(ite);
	cout << low <<" "<< upper;

	return 0;
}