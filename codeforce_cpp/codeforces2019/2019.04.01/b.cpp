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
ll asdf[2000];
int main() {
#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
	ifstream in("in.txt");
#endif
#ifdef __APPLE__
	ifstream in("../../in.txt");
#endif
#endif
	ll c;
	cin >> c;
	ll odd = 0, even = 0;
	multiset<ll> modd;
	multiset<ll> meven;
	for (ll i = 0; i < c; ++i) {
		ll input;
		cin >> input;
		if (input % 2 == 1) {
			odd++;
			modd.insert(input);
		}
		else {
			even++;
			meven.insert(input);
		}
	}
	if (c != 2 && abs(odd-even) <= 1) {
		cout << 0;
	}
	else if (c == 2 && odd == even) {
		cout << 0;
	}
	else {
		ll result =0;
		if (odd < even) {
			multiset<ll>::iterator it  = meven.begin();
			for (ll i = 0; i < even - odd - 1; ++i) {
				result += *(it++);
			}
		}
		else {
			multiset<ll>::iterator it = modd.begin();
			for (ll i = 0; i < odd - even - 1; ++i) {
				result += *(it++);
			}
		}
		cout << result;
	}
	
	
	return 0;
}