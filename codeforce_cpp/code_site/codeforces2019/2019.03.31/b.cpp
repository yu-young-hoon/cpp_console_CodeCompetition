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



int power(int length) {
	int result = 1;
	for (int i = 1; i <= length; i++)
		result = result *9;
	return result;
}


int main() {
#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
	ifstream in("in.txt");
#endif
#ifdef __APPLE__
	ifstream in("../../in.txt");
#endif
#endif
	string a;
	cin >> a;
	ll n = a.size();
	ll maxans, d = 1;

	maxans = power(n - 1);
	for (int i = 0; i<n; i++) {
		maxans = max(maxans, d*power(n - i - 1)*(a[i] - '1'));
		d = d*(a[i] - '0');
	}
	cout << max(maxans, d) << endl;

	return 0;
}