#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif
#include <iostream>
using namespace std;

int main() {
	int c;
	string a, b;
	cin >> c;
	getline(cin, a);
	while (a.length() == 0)
		getline(cin, a);
	getline(cin, b);
	while (b.length() == 0)
		getline(cin, b);
	

	int count = 0;
	vector<int> s;
	for (int i = 0; i < c;  ++i) {
		if (b[i] == a[i])
			continue;
		for (int j = i; j < c ; ++j) {
			if (b[i] != a[j]) {
				continue;
			}
			for (int k = j; k > i; --k) {
				count++;
				int t = a[k];
				a[k] = a[k - 1];
				a[k - 1] = t;
				s.push_back(k);
			}
			break;
		}
		if (b[i] != a[i]) {
			cout << -1;
			return 0;
		}
	}
	
	
	cout << count << endl;
	for (int i = 0; i < count; ++i)cout << s[i] << " ";
	return 0;
}