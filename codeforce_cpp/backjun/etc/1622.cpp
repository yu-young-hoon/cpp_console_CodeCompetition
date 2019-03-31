#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
#include "..\\..\\stdc++.h"
#endif
#ifdef __APPLE__
#include "../../stdc++.h"
#endif
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
	ifstream in("in.txt");
#endif
#ifdef __APPLE__
	ifstream in("../../in.txt");
#endif
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	string aa;
	string first;
	string seconds;
	while (getline(cin, first) && getline(cin, seconds)) {
		ll ss = seconds.length();
		for (ll i = 0; i < first.length(); ++i) {
			for (ll j = 0; j < ss; ++j) {
				ll a = seconds.find(first[i]);
				if (a != string::npos) {
					aa.append(first.substr(i, 1));
					seconds.erase(a, 1);
					ss--;
					break;
				}
			}
		}
		sort(aa.begin(), aa.end());
		cout << aa << endl;
		aa.clear();
		first.clear();
		seconds.clear();
	}

	return 0;
}
// remind
// 94번 제출하고
// 17년 10월에 처음 실패
// 18년 8월에 재도전 실패
// 19년 2월부터 4월까지 생각날때마다 해봤는데
// 입출력문제였다니 속상하다...