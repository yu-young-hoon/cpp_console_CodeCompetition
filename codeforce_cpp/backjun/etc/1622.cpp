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
#endif
	multiset<char> aa;
	string first;
	string seconds;
	while (1) {
		aa.clear();
		first.clear();
		seconds.clear();

		getline(cin, first);
		getline(cin, seconds);
		ll ss = seconds.size();
		if (first.size() == 0 && seconds.size() == 0)
			return 0;
		if (first.size() == 0 || seconds.size() == 0) {
			printf("\n");
			continue;
		}
			
		for (ll i = 0; i < first.size(); ++i) {
			for (ll j = 0; j < ss; ++j) {
				ll a = seconds.find(first[i]);
				if (a != string::npos) {
					aa.insert(first[i]);
					seconds.erase(a, 1);
					ss-- ;
					i--;
					break;
				}
			}
		}
		multiset<char>::iterator aaa = aa.begin();
		ll asdf = aa.size();
		for (ll i = 0; i < asdf; ++i) {
			printf("%c", *(aaa++));
		}
		printf("\n");
		
		
	}

	return 0;
}

// TODO
// https://www.acmicpc.net/problem/1622