#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

long long __lcm(long long a, long long b) {
	return a * b / __gcd(a, b);
}

int solution(int N, int number) {
	int answer = 1;
	
	ll lcmv = __lcm(N, number);
	ll a = 1, maxss = 1, x = 1;
	while (1) {
		if ((maxss + a * 10) * N > lcmv) {
			break;
		}
		a *= 10;
		maxss += a;
		x++;
	}

	while (1) {
		if (lcmv == 0) {
			break;
		}
		if (answer > 8) {
			return -1;
		}
		if (lcmv - maxss * N >= 0) {
			lcmv -= maxss * N;
			answer += x;
			continue;
		}

		if (lcmv - maxss * N < 0) {
			maxss -= a;
			a /= 10;
			x--;
			continue;
		}
	}

	return answer;
}

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	cout << solution(5, 12);

	return 0;
}