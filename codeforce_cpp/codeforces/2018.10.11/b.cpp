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
	// 점, 선
	ll a, b;
	cin >> a >> b;

	ll minR = a, maxR = 0;
	
	// 선개수가 점 절반보다 크면 고립 없음
	minR = max(0LL, a - b * 2);
	
	// n * (n-1) / 2 점 개수가 늘어 날때마다 최대 선개수
	for (ll i = 0; i <= a; ++i) {
		if (i * (i - 1) - b * 2 >= 0)
		{
			maxR = a - i;
			break;
		}
	}

	cout << minR << " " << maxR << endl;

	return 0;
}