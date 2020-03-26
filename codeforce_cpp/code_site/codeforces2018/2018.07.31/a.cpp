#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif
#define XX 1000

using namespace std;

int main() {
	int m, c;
	int in[XX] = {0,};
	cin >> m >> c;

	vector<int> v;

	for (int i = 0; i < m; ++i) {
		int s, e;

		cin >> s >> e;

		if (s > e) {
			int t = s;
			s = e;
			e = t;
		}
		for (int j = s-1; j < e; ++j) {
			in[j]++;
		}
	}
	string a;
	for (int i = 0; i < c; ++i) {
		if (in[i] == 0) {
			v.push_back(i + 1);
		}
	}
	
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)cout << v[i] << " ";
	cout << a;

	return 0;
}